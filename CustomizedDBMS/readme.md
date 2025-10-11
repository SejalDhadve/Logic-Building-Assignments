Customized DBMS (Database Management System)

■ Technology: Java Programming

■ Project Overview
    This project is a Java-based customized Database Management System (DBMS) that provides fundamental database functionalities such as inserting, displaying, searching, deleting, and backing up employee records.
    It simulates a lightweight DBMS system built completely using Java Collections Framework and File Handling with Serialization, without using an external database like MySQL.
    The system allows users to store employee data such as ID, Name, Age, Address, and Salary, and provides features similar to SQL commands such as INSERT, SELECT, and DELETE.
    Backup and restore features are integrated to preserve data across multiple sessions.

■ Software Pre-requisites
    1. Operating System: Windows / macOS / Linux (any OS with Java support)

    2. Java Development Kit (JDK)  : 24.0.1
         
    3. Integrated Development Environment (IDE): Visual Studio Code

     4. Java Runtime Environment (JRE): Required for running the compiled .class files.

■ Technologies used 
      - Java 24.0.1– Core Java used for logic and execution
      - Java Collections Framework – LinkedList used to store employee records
      - Java I/O Streams – For reading/writing data during backup and restore
      - Serialization & Deserialization – To save and load employee data permanently
      - File Handling APIs – Used to manage the .ser backup file
      - Exception Handling – To manage runtime errors smoothly
      - Scanner Class (User Input Handling) – For console-based interaction

■ Key Features
1. Data Insertion
    - Allows users to insert employee records dynamically using console input.
    - Automatically generates a unique Employee ID for each record.

2. Data Retrieval
    - Provides the ability to display all employee records in a tabular format (SELECT * FROM Employee).
    - Supports searching of specific employees by:
                                                • Employee ID
                                                • Employee Name

3. Data Deletion
    - Deletes specific employee records based on the provided Employee ID.

4. Data Backup and Restore
   - Includes built-in serialization and deserialization to store and restore all employee data.
   - Saves the database into a file named MarvellousDBMS.ser for permanent storage.

5. Console-Based User Interface
    - Interactive menu-driven console interface for performing operations easily.
    - Users can choose operations just like executing SQL queries.

6. Object-Oriented Design
    - Implements Encapsulation, Abstraction, and Serialization concepts effectively.
    - Each employee is represented as an object of the Employee class.


■ Learning Outcomes
    1. Practical experience with Java I/O Streams and Serialization APIs.
    2. In-depth understanding of Object-Oriented Programming (OOP) principles.
    3. Implementation of in-memory database using LinkedList collection.
    4. Gained knowledge of metadata management, file handling, and data persistence.
    5. Experience in designing and simulating DBMS operations (INSERT, SELECT, DELETE, BACKUP).
    6. Hands-on practice in exception handling and user interaction using Java console

■ How to Run : 
   • for Compile : javac CustomizedDBMS.java
   • for Run     : java CustomizedDBMS
  

