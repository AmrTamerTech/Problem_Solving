/* Write your T-SQL query statement below */
select firstName, LastName, city , state
from Person P
left join Address A
on P.PersonId = A.PersonId;