# Write your MySQL query statement below
DELETE P1
FROM Person AS P1
JOIN Person AS P2
ON P1.email=P2.email
WHERE P1.id>P2.id;