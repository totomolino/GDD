use GD2015C1

select prod_codigo,prod_detalle,sum(stoc_cantidad)
from Producto join STOCK on prod_codigo = stoc_producto
group by prod_codigo, prod_detalle
order by prod_detalle