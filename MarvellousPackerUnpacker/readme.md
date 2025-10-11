File Packer & Unpacker with Encryption

Technology: Java Programming

■ Project Overview

This project is a Java-based file utility tool that provides functionality for packing multiple files into a single archive and later unpacking them back while preserving all metadata
(file name, size, and timestamps). To enhance security, the packed file is encrypted, and only authorized users can decrypt and extract the data. 
The project also features a Graphical User Interface (GUI) built using Java Swing for an intuitive user experience.

■ Software Pre-requisite 
- Java Development Kit (JDK) —  Version 24.0.1
  (Used to compile and run Java programs)
  
- Java IDE  —  VS Code  
  (For editing and running Java code)

- Command Line / Terminal — to compile and execute the program using javac and java

- Operating System — Windows / Linux / macOS  
  (Project is platform-independent) 

■Technologies used 
- Java 24.0.1
- Java Swing
- Java I/O Streams
- Basic Encryption Techniques
- File Handling APIs

■ Key Features

1. File Packing - Combines multiple files into a single archive and stores metadata.
2. File Unpacking - Extracts files and restores metadata and structure.
3. Data Security - Built-in encryption and decryption mechanisms.
4. Graphical User Interface (GUI) - Java Swing-based user-friendly design.
5. Cross-Platform - Works on any system with JRE.

■ Learning Outcomes

1. Experience with Java I/O Streams and File Handling APIs.
2. Implementation of metadata management during operations.
3. Understanding of encryption/decryption techniques.
4. Hands-on GUI development using Swing.
5. Insight into archiving and compression utilities.

■ Example Usage (Console Flow)

Packing Files:
java FilePacker Demo Pack.txt

Unpacking Files:
java FileUnpacker Pack.txt

■ How to Run :-
for Compile : javac PackerUnpacker.java
for Run     : java PackerUnpacker
