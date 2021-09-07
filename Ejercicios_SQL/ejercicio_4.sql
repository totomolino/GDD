use GD2015C1
--este esta conceptualmente mal
select prod_codigo,prod_detalle, count(distinct comp_componente)
from Producto left join Composicion on prod_codigo = comp_producto join stock on prod_codigo = stoc_producto
group by prod_codigo,prod_detalle
having avg(stoc_cantidad) > 100
order by 3 desc


--este esta bien
select prod_codigo,prod_detalle, count(comp_producto)
from Producto left join Composicion on prod_codigo = comp_producto
group by prod_codigo,prod_detalle
having prod_codigo in (select stoc_producto from STOCK group by stoc_producto having AVG(stoc_cantidad)>100)
order by 3 desc

