select prod_codigo,prod_detalle, sum(item_cantidad)
from item_factura join Producto on prod_codigo = item_producto join Factura on fact_tipo + fact_sucursal+fact_numero = item_tipo+item_sucursal+item_numero--hasta aca tengo los vendidos
where year(fact_fecha) = 2012
group by prod_codigo,prod_detalle, item_producto
having sum(item_cantidad) > 
(select sum(item_cantidad)
from item_factura join Factura on fact_tipo + fact_sucursal+fact_numero = item_tipo+item_sucursal+item_numero--hasta aca tengo los vendidos
where item_producto = prod_codigo and year(fact_fecha) = 2011)