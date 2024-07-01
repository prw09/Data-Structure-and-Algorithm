# Write your MySQL query statement below
select distinct(author_id) as id 
from Views
where author_id = viewer_id
order by id 


-- SELECT DISTINCT author_id AS id
-- FROM Views
-- WHERE author_id = viewer_id
-- ORDER BY 1;