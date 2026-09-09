SELECT *
FROM Users
WHERE REGEXP_LIKE(
    mail,
    '^(?-i)[a-zA-Z][a-zA-Z0-9_.-]*@leetcode\\.com$'
);