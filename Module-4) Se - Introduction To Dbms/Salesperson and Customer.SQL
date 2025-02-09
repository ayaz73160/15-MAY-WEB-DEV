CREATE TABLE Salesperson (
    SNO INT PRIMARY KEY,
    SNAME VARCHAR(50),
    CITY VARCHAR(50),
    COMM DECIMAL(3, 2)
);

-- Insert data into Salesperson table
INSERT INTO Salesperson (SNO, SNAME, CITY, COMM) VALUES
(1001, 'Peel', 'London', 0.12),
(1002, 'Serras', 'San Jose', 0.13),
(1004, 'Motika', 'London', 0.11),
(1007, 'Rafkin', 'Barcelona', 0.15),
(1003, 'Axerold', 'New York', 0.10);

CREATE TABLE Customer (
    CNM INT PRIMARY KEY,
    CNAME VARCHAR(50),
    CITY VARCHAR(50),
    Rating INT,
    SNO INT,
    FOREIGN KEY (SNO) REFERENCES Salesperson(SNO)
);

-- Insert data into Customer table
INSERT INTO Customer (CNM, CNAME, CITY, Rating, SNO) VALUES
(201, 'Hoffman', 'London', 100, 1001),
(202, 'Giovanne', 'Roe', 200, 1003),
(203, 'Liu', 'San Jose', 300, 1002),
(204, 'Grass', 'Barcelona', 100, 1002),
(206, 'Clemens', 'London', 300, 1007),
(207, 'Pereira', 'Roe', 100, 1004);

SELECT * 
FROM Orders 
WHERE OrderAmount > 1000;

SELECT SNAME, CITY 
FROM Salesperson 
WHERE CITY = 'London' AND COMM > 0.12;

SELECT * 
FROM Salesperson 
WHERE CITY IN ('Barcelona', 'London');

SELECT * 
FROM Salesperson 
WHERE COMM > 0.10 AND COMM < 0.12;

SELECT * 
FROM Customer 
WHERE Rating > 100 OR (Rating <= 100 AND CITY = 'Roe');

