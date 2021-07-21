Q1. What is the difference between SQL and MySQL?
SQL vs MySQL

SQL	MySQL
SQL is a standard language which stands for Structured Query Language based on the English language

MySQL is a database management system.
SQL is the core of the relational database which is used for accessing and managing database	

MySQL is an RDMS (Relational Database Management System) such as SQL Server, Informix etc.

Q2. What are the different subsets of SQL?
Data Definition Language (DDL) – It allows you to perform various operations on the database such as CREATE, ALTER, and DELETE objects.
Data Manipulation Language(DML) – It allows you to access and manipulate data. It helps you to insert, update, delete and retrieve data from the database.
Data Control Language(DCL) – It allows you to control access to the database. Example – Grant, Revoke access permissions.

Inner join: Inner Join in SQL is the most common type of join. It is used to return all the rows from multiple tables where the join condition is satisfied. 
Left Join:  Left Join in SQL is used to return all the rows from the left table but only the matching rows from the right table where the join condition is fulfilled.

Right Join: Right Join in SQL is used to return all the rows from the right table but only the matching rows from the left table where the join condition is fulfilled.

Full Join: Full join returns all the records when there is a match in any of the tables. Therefore, it returns all the rows from the left-hand side table and all the rows from the right-hand side table.

What is the difference between CHAR and VARCHAR2 datatype in SQL?
Both Char and Varchar2 are used for characters datatype but varchar2 is used for character strings of variable length whereas Char is used for strings of fixed length. For example, char(10) can only store 10 characters and will not be able to store a string of any other length whereas varchar2(10) can store any length i.e 6,8,2 in this variable.

What is a Primary key?
Table - SQL Interview Questions - EdurekaA Primary key in SQL is a column (or collection of columns) or a set of columns that uniquely identifies each row in the table.
Uniquely identifies a single row in the table
Null values not allowed

What is a Unique key?
Uniquely identifies a single row in the table.
Multiple values allowed per table.
Null values allowed.

What do you mean by Denormalization?
Denormalization refers to a technique which is used to access data from higher to lower forms of a database. It helps the database managers to increase the performance of the entire infrastructure as it introduces redundancy into a table. It adds the redundant data into a table by incorporating database queries that combine data from various tables into a single table.

What is an Index?
An index refers to a performance tuning method of allowing faster retrieval of records from the table. An index creates an entry for each value and hence it will be faster to retrieve data.

Explain different types of index in SQL.
There are three types of index in SQL namely:

Unique Index:
This index does not allow the field to have duplicate values if the column is unique indexed. If a primary key is defined, a unique index can be applied automatically.

Clustered Index:
This index reorders the physical order of the table and searches based on the basis of key values. Each table can only have one clustered index.

Non-Clustered Index:
Non-Clustered Index does not alter the physical order of the table and maintains a logical order of the data. Each table can have many non clustered indexes.

What is Normalization and what are the advantages of it?
Normalization in SQL is the process of organizing data to avoid duplication and redundancy. Some of the advantages are:

Better Database organization
More Tables with smaller rows
Efficient data access
Greater Flexibility for Queries
Quickly find the information
Easier to implement Security
Allows easy modification
Reduction of redundant and duplicate data
More Compact Database
Ensure Consistent data after modification

Explain different types of Normalization.
There are many successive levels of normalization. These are called normal forms. Each consecutive normal form depends on the previous one.The first three normal forms are usually adequate.

First Normal Form (1NF) – No repeating groups within rows
Second Normal Form (2NF) – Every non-key (supporting) column value is dependent on the whole primary key.
Third Normal Form (3NF) – Dependent solely on the primary key and no other non-key (supporting) column value.

What is the ACID property in a database?
ACID stands for Atomicity, Consistency, Isolation, Durability. It is used to ensure that the data transactions are processed reliably in a database system. 

Atomicity: Atomicity refers to the transactions that are completely done or failed where transaction refers to a single logical operation of a data. It means if one part of any transaction fails, the entire transaction fails and the database state is left unchanged.
Consistency: Consistency ensures that the data must meet all the validation rules. In simple words,  you can say that your transaction never leaves the database without completing its state.
Isolation: The main goal of isolation is concurrency control.
Durability: Durability means that if a transaction has been committed, it will occur whatever may come in between such as power loss, crash or any sort of error.

Are NULL values same as that of zero or a blank space? 
A NULL value is not at all same as that of zero or a blank space. NULL value represents a value which is unavailable, unknown, assigned or not applicable whereas a zero is a number and blank space is a character.

What is subquery in SQL?
A subquery is a query inside another query where a query is defined to retrieve data or information back from the database. In a subquery, the outer query is called as the main query whereas the inner query is called subquery. Subqueries are always executed first and the result of the subquery is passed on to the main query. It can be nested inside a SELECT, UPDATE or any other query. A subquery can also use any comparison operators such as >,< or =.

What is a relationship and what are they?
Database Relationship is defined as the connection between the tables in a database. There are various data basing relationships, and they are as follows:.

One to One Relationship.
One to Many Relationship.
Many to One Relationship.
Self-Referencing Relationship.

What is the difference between DELETE and TRUNCATE commands?
DELETE command is used to remove rows from the table, and WHERE clause can be used for conditional set of parameters. Commit and Rollback can be performed after delete statement.

TRUNCATE removes all rows from the table. Truncate operation cannot be rolled back.

What is a Self-Join?
A self JOIN is a case of regular join where a table is joined to itself based on some relation between its own column(s). Self-join uses the INNER JOIN or LEFT JOIN clause and a table alias is used to assign different names to the table within the query.

What is a Cross-Join?
Cross join can be defined as a cartesian product of the two tables included in the join. The table after join contains the same number of rows as in the cross-product of number of rows in the two tables. If a WHERE clause is used in cross join then the query will work like an INNER JOIN.

