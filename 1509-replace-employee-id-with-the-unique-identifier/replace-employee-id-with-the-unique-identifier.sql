# Write your MySQL query statement below
SELECT 
a.unique_id, 
e.name
FROM Employees e
LEFT JOIN EmployeeUNI a
ON e.id=a.id