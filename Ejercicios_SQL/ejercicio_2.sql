use GD2015C1


select prod_codigo,prod_detalle, count(distinct fact_tipo+fact_sucursal+fact_numero) cantFacturas
from Producto join Item_Factura on prod_codigo = item_producto join Factura on 
	fact_tipo + fact_sucursal+fact_numero = item_tipo+item_sucursal+item_numero
where year(fact_fecha) = 2012
group by prod_codigo,prod_detalle
order by sum(item_cantidad)