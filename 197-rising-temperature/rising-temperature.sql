# Write your MySQL query statement below
SELECT W.id
FROM Weather AS W
JOIN Weather AS W1
ON DATEDIFF(W.recordDate,W1.recordDate)=1
WHERE W.temperature>W1.temperature;