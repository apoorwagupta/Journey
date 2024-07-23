# Write your MySQL query statement 
with cte as(
    select *, sum(weight) over (order by turn) as cumulative 
    from queue
)
select person_name from cte where cumulative<=1000
ORDER BY turn desc
limit 1;