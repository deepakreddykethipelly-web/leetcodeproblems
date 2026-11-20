# Write your MySQL query statement below
SELECT 
e.id
FROM Weather e
JOIN Weather m ON 
DATEDIFF(e.recordDate,m.recordDate)=1
WHERE e.temperature>m.temperature;