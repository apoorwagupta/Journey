# Write your MySQL query statement below
select lastName,firstName,state,city from person
left join address on person.personId=Address.personId;