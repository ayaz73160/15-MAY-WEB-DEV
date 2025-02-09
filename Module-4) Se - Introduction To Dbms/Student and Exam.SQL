-- Create Student table

CREATE DATABASE QUESTION;
CREATE TABLE Student (
    RollNo INT PRIMARY KEY,
    Name VARCHAR(50),
    Branch VARCHAR(50)
);

-- Insert data into Student table
INSERT INTO Student (RollNo, Name, Branch) VALUES
(1, 'Jay', 'Computer Science'),
(2, 'Suhani', 'Electronic and Com'),
(3, 'Kriti', 'Electronic and Com');

-- Create Exam table with RollNo as foreign key
CREATE TABLE Exam (
    RollNo INT,
    S_Code VARCHAR(10),
    Marks INT,
    P_Code VARCHAR(10),
    FOREIGN KEY (RollNo) REFERENCES Student(RollNo)
);

-- Insert data into Exam table
INSERT INTO Exam (RollNo, S_Code, Marks, P_Code) VALUES
(1, 'CS11', 50, 'CS'),
(1, 'CS12', 60, 'CS'),
(2, 'EC_101', 66, 'EC'),
(2, 'EC_102', 70, 'EC'),
(3, 'EC_101', 45, 'EC'),
(3, 'EC_102', 50, 'EC');

select * from exam;