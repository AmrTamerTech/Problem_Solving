/* Write your T-SQL query statement below */
select email As Email
from person
group by Email
having count(email) > 1