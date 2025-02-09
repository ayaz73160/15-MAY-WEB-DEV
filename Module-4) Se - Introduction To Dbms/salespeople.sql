-- Create the Salesperson table
CREATE TABLE Salesperson (
    Salesman_id INT PRIMARY KEY,
    Name VARCHAR(50),
    City VARCHAR(50),
    Commission DECIMAL(3, 2)
);

-- Insert data into Salesperson table
INSERT INTO Salesperson (Salesman_id, Name, City, Commission) VALUES
(5001, 'James Hoog', 'New York', 0.15),
(5002, 'Nail Knite', 'Paris', 0.13),
(5005, 'Pit Alex', 'London', 0.11),
(5006, 'Mc Lyon', 'Paris', 0.14),
(5007, 'Paul Adam', 'Rome', 0.13),
(5003, 'Lauson Hen', 'San Jose', 0.12);

-- Query to display all information about all salespeople
SELECT * 
FROM Salesperson;
