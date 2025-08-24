CREATE TABLE Person(
  	ID int(20) Primary key,
  	FName varchar(50) Not Null,
  	LName varchar(50) Not Null,
  	Email varchar(60) UNIQUE
);
INSERT into Person(ID, FName, LName, Email)
VALUES
	(101, "Abc", "K", "abc@example.com"),
    (102, "Bcd", "T", "nfs@example.com"),
    (103, "lyp", "P", "air@example.com"),
    (104, "jdi", "r", "mda@example.com");