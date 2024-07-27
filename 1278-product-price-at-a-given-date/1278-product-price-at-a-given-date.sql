# Write your MySQL query statement below
WITH cte AS (
    SELECT 
        product_id, 
        max(change_date) as pre_change_date
    FROM products
    where change_date<='2019-08-16' 
    group by product_id 
    -- the latest change dates before or on 16th and corresponding prices
)


SELECT p.product_id, new_price as price
FROM products p join cte on
p.product_id = cte.product_id and p.change_date =cte.pre_change_date
union 
SELECT distinct product_id, 10 as price
from products where product_id not in (select product_id from cte);