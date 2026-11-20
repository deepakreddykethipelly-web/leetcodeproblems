# Write your MySQL query statement below
SELECT 
e.customer_id,
COUNT(e.visit_id) AS count_no_trans
FROM Visits e
LEFT JOIN Transactions t ON
e.visit_id=t.visit_id
WHERE t.transaction_id IS NULL
GROUP BY e.customer_id;