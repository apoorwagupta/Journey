# Write your MySQL query statement below
# 
# That would not work if the timestamp is an actual date/time format. 

# select a.machine_id, round(avg(b.timestamp - a.timestamp), 3) as processing_time 
# from activity a join activity b
# on a.machine_id = b.machine_id and a.process_id = b.process_id and a.activity_type = 'start' and b.activity_type = 'end'
# group by a.machine_id;
select m1.machine_id, round(avg(m2.timestamp-m1.timestamp),3) as processing_time
from Activity m1, Activity m2
where m1.machine_id = m2.machine_id and m1.process_id = m2.process_id and m1.activity_type = 'start'and m2.activity_type = 'end'
group by m1.machine_id;