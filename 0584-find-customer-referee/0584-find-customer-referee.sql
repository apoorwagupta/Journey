/* Write your PL/SQL query statement below */
select name from Customer where(referee_id is null OR referee_id!=2) ;