/* Write your T-SQL query statement below */
Delete P1
from Person P1
inner join Person P2
on P1.email = P2.email and P1.id > P2.id