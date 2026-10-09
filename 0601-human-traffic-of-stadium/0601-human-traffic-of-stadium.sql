# Write your MySQL query statement below
WITH x AS (
    SELECT *,
           LAG(people, 1) OVER (ORDER BY visit_date) AS prev1,
           LAG(people, 2) OVER (ORDER BY visit_date) AS prev2,
           LEAD(people, 1) OVER (ORDER BY visit_date) AS next1,
           LEAD(people, 2) OVER (ORDER BY visit_date) AS next2
    FROM Stadium
)
SELECT id, visit_date, people
FROM x
WHERE people >= 100
  AND (
       (prev1 >= 100 AND prev2 >= 100)
    OR (prev1 >= 100 AND next1 >= 100)
    OR (next1 >= 100 AND next2 >= 100)
  )
ORDER BY visit_date;