# Write your MySQL query statement below
select Students.student_id, student_name,Subjects.subject_name,count(Examinations.subject_name) as attended_exams
from Students 
join Subjects
left join Examinations on Examinations.student_id = Students.student_id
and Subjects.subject_name = Examinations.subject_name
group by Students.student_id, Subjects.subject_name
order by student_id,subject_name;


# First, we want to group every students of Students with every subjects in Subjects:

# SELECT *
# FROM Students
# JOIN Subjects
# this gives us the "headers" ["student_id", "student_name", "subject_name"].

# Then, we want to join the Examinations table where the student_id and subject_name fit with our previously created table:

# SELECT *
# FROM Students
# JOIN Subjects
# LEFT JOIN Examinations
# ON Students.student_id = Examinations.student_id
# AND Subjects.subject_name = Examinations.subject_name
# This gives us the "headers" ["student_id", "student_name", "subject_name", "student_id", "subject_name"].

# As you can see, student_id and subject_name here are duplicated columns with the same values.
# We can select them like this:

# SELECT
#     Students.student_id,
#     Students.student_name,
#     Subjects.subject_name
# FROM Students
# JOIN Subjects
# LEFT JOIN Examinations
# ON Students.student_id = Examinations.student_id
# AND Subjects.subject_name = Examinations.subject_name
# This will give us the "headers" ["student_id", "student_name", "subject_name"].

# If you run it, you would see duplicated values of students with the same subject.
# This is because There is no primary key for [the Examinations] table. [So] It may contain duplicates.
# We want to group them and count the number attended exams like this:

# SELECT
#     Students.student_id,
#     Students.student_name,
#     Subjects.subject_name,
#     COUNT(Examinations.subject_name) AS attended_exams
# FROM Students
# JOIN Subjects
# LEFT JOIN Examinations
# ON Students.student_id = Examinations.student_id
# AND Subjects.subject_name = Examinations.subject_name
# GROUP BY Students.student_id, Subjects.subject_name
# Finally, we need to

# Return the result table ordered by student_id and subject_name.

# So we add the last line:

# SELECT
#     Students.student_id,
#     Students.student_name,
#     Subjects.subject_name,
#     COUNT(Examinations.subject_name) AS attended_exams
# FROM Students
# JOIN Subjects
# LEFT JOIN Examinations
# ON Students.student_id = Examinations.student_id
# AND Subjects.subject_name = Examinations.subject_name
# GROUP BY Students.student_id, Subjects.subject_name
# ORDER BY student_id ASC, subject_name ASC