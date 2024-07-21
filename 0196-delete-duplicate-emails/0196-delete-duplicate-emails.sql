# Write your MySQL query statement below
with cte as(
    select id, email,
    ROW_NUMBER() OVER (PARTITION BY email ORDER BY id) AS rn
    from Person
    )
delete from person
where id in (
    select id from cte
    where rn>1
);