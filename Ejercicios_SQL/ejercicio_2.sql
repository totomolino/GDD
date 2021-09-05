use GD2015C1

select prod_codigo,prod_detalle,fact_fecha from Producto,Item_Factura,Factura
where prod_codigo = item_producto and item_numero = fact_numero and year(fact_fecha) = 2012
order by item_cantidad

