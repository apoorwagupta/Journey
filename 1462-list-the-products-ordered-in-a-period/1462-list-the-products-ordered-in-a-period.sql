# Write your MySQL query statement below

    select p.product_name ,sum(o.unit) as unit
    from orders o 
    join products p on 
    p.product_id = o.product_id
    WHERE YEAR(o.order_date)='2020' AND MONTH(o.order_date)='02'
    GROUP BY p.product_id
    HAVING SUM(o.unit)>=100;
