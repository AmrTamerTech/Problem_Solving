/* Write your T-SQL query statement below */
select E.name as Employee
from Employee E
join Employee M
on E.ManagerId = M.Id
where E.salary > M.salary 