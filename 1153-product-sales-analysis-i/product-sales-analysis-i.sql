# Write your MySQL query statement below
SELECT
a.product_name,
e.year,
e.price
FROM Sales e
LEFT JOIN Product a 
ON e.product_id=a.product_id;