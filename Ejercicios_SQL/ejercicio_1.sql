select clie_codigo,clie_razon_social,clie_limite_credito from dbo.Cliente where clie_limite_credito>= 1000 order by clie_codigo;