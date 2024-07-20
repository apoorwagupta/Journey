# Write your MySQL query statement below

select managers.employee_id,
managers.name,
count(worker.employee_id) as reports_count,
round(avg(worker.age)) as average_age
from employees managers
join employees worker
on 
managers.employee_id=worker.reports_to
group by managers.employee_id
order by managers.employee_id;