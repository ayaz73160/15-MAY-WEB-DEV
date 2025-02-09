CREATE TABLE Employee (
    Employee_ID INT PRIMARY KEY,
    First_Name VARCHAR(50),
    Last_Name VARCHAR(50),
    Salary INT,
    Joining_Date DATE,
    Department VARCHAR(50)
);

-- Insert data into Employee table
INSERT INTO Employee (Employee_ID, First_Name, Last_Name, Salary, Joining_Date, Department) VALUES
(1, 'John', 'Abraham', 1000000, '2013-01-01', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '2013-01-01', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '2013-02-01', 'Banking'),
(4, 'Tom', 'Joes', 600000, '2013-02-01', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '2013-02-01', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '2013-01-01', 'Services'),
(7, 'TestName1', '123', 650000, '2013-01-01', 'Services'),
(8, 'TestName2', 'Lname', 600000, '2013-02-01', 'Insurance');

CREATE TABLE Incentive (
    Employee_Ref_ID INT,
    Incentive_Date DATE,
    Incentive_Amount INT,
    FOREIGN KEY (Employee_Ref_ID) REFERENCES Employee(Employee_ID)
);

-- Insert data into Incentive table
INSERT INTO Incentive (Employee_Ref_ID, Incentive_Date, Incentive_Amount) VALUES
(1, '2013-02-01', 5000),
(2, '2013-02-01', 3000),
(3, '2013-02-01', 4000),
(1, '2013-01-01', 4500),
(2, '2013-01-01', 3500);

SELECT * FROM EMPLOYEE;

SELECT First_Name 
FROM Employee 
WHERE First_Name = 'Tom';

SELECT First_Name, Joining_Date, Salary 
FROM Employee;

SELECT * 
FROM Employee 
ORDER BY First_Name ASC, Salary DESC;

SELECT * 
FROM Employee 
WHERE First_Name LIKE 'J%';

SELECT Department, MAX(Salary) AS Max_Salary 
FROM Employee 
GROUP BY Department 
ORDER BY Max_Salary ASC;

SELECT e.First_Name, i.Incentive_Amount 
FROM Employee e 
JOIN Incentive i ON e.Employee_ID = i.Employee_Ref_ID 
WHERE i.Incentive_Amount > 3000;

CREATE TABLE ViewTable (
    Employee_ID INT,
    First_Name VARCHAR(50),
    Department VARCHAR(50),
    Insertion_Time TIMESTAMP
);


CREATE TRIGGER after_employee_insert
AFTER INSERT ON Employee
FOR EACH ROW
BEGIN
    INSERT INTO ViewTable (Employee_ID, First_Name, Department, Insertion_Time)
    VALUES (NEW.Employee_ID, NEW.First_Name, NEW.Department, CURRENT_TIMESTAMP)
END




