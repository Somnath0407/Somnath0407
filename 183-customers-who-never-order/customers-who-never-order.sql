# Write your MySQL query statement below
SELECT name AS Customers
FROM Customers AS C
LEFT JOIN Orders AS O
ON C.id=O.CustomerId
WHERE O.CustomerId IS NULL;