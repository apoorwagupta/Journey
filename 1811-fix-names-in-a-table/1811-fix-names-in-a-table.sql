# Write your MySQL query statement below
select user_id, concat(UPPER(SUBSTRING(name, 1, 1)),lower(SUBSTRING(name, 2))) as name
from users
order by user_id
