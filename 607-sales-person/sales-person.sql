# Write your MySQL query statement below
select s.name
from SalesPerson as s
where s.sales_id not in(
select o.sales_id 
from Orders as o
join Company as c on c.com_id =o.com_id
where c.name="RED");