# Write your MySQL query statement below
select o.customer_number
from Orders as o
group by customer_number
order by count(order_number) desc
limit 1;