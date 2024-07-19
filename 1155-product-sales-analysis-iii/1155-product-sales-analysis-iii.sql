# Write your MySQL query statement below
with CTE as ( 
    select product_id,min(year) as first_year  from sales
    group by product_id)
select s.product_id,s.year as first_year,s.quantity,s.price 
from Sales s
join CTE
on  
CTE.product_id=s.product_id  AND s.year=CTE.first_year;

