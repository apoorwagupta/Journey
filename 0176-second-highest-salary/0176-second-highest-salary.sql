WITH cte AS (
    SELECT salary, 
           DENSE_RANK() OVER (ORDER BY salary DESC) AS rnk
    FROM employee
)
SELECT 
    (SELECT salary 
     FROM cte 
     WHERE rnk = 2
     LIMIT 1) AS SecondHighestSalary;
