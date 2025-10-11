Marvellous Study Tracker App

■ Technology: Java  
■ Type:  Console-Based Application  

■ Project Overview
     The Marvellous Study Tracker App is a console-based Java application designed to help students systematically log, track, summarize, and export their study activities.
     It allows users to Maintain daily study records, view summaries grouped by date or subject,export study logs into a CSV file for offline reference.
     This project demonstrates practical usage of Java Collections, File I/O, and  Object-Oriented Programming (OOP) in a real-world, utility-driven application.

■ Software Pre-requisites
    1. Operating System: Windows / Linux / macOS
                        (Any platform that supports Java runtime)

    2. Java Development Kit (JDK): 24.0.1 (Required to compile and run Java source files).

    3. Integrated Development Environment (IDE): Visual Studio Code (For writing, editing, and debugging Java code).

■ Technologies Used
     • Language: Java
     • Packages & APIs:
     • java.util.* – ArrayList, TreeMap, Scanner (data handling & input)   
     • java.time.LocalDate – Auto date generation   
     • java.io.* – File handling & CSV export
    
■ Key Features

•Insert Study Log
   - Record study sessions with date (auto-generated), subject, duration, and description.
•Display Logs
  - View all study logs currently stored in memory.
•Summary by Date
 - Calculate and display *total study hours* grouped by date.
•Summary by Subject
  - Calculate and display *total study hours* grouped by subject.
•Export to CSV
   - Export all study logs into a *CSV file* (MarvellousStudy.csv) for offline tracking.
•User-Friendly Console Menu
  - Menu-driven interface with *switch-case navigation* for ease of use.

■ Technologies Used
     - Language: Java  
     - Packages & APIs:
            •java.util.* → Data structures (ArrayList, TreeMap), user input via Scanner.
            •java.time.LocalDate → Auto-captures the current date for study logs.
            •java.io.* → File handling and CSV export.

■ Project Flow
      1. Launch the application → *Main Menu displayed*  
      2. Choice 1: Insert new study log - User provides subject, duration, description → Date auto-generated  
      3. Choice 2: Display all logs  
      4. Choice 3: Display summary grouped by date  
      5. Choice 4: Display summary grouped by subject  
      6. Choice 5: Export all logs to MarvellousStudy.csv  
      7. Choice 6: Exit application  

■ Classes & Responsibilities
   StudyLog
       • Represents a single study session.  
       • Attributes: LocalDate date, String subject, double duration, String description  
       • Methods: Constructor, Getters & Setters, toString()  

   Tracker
      • Manages all logs in memory.  
      • Attributes: ArrayList<StudyLog> database
      • Methods:  InsertLog(), DisplayLog(), SummaryByDate(), SummaryBySubject(), ExportCSV()  

   StudyTracker (Main Class)
       • Contains main() method.  
       • Handles *menu-driven interface* and *user input*.  
       • Calls methods from StudyTracker.

■ Example Usage (Console Flow)

===== Marvellous Study Tracker =====
1. Insert Study Log
2. Display All Logs
3. Summary By Date
4. Summary By Subject
5. Export to CSV
6. Exit Enter choice: 1
Enter Subject: Java Programming
Enter Duration (hours): 2.5
Enter Description: Practiced ArrayList and TreeMap
Study log added successfully for date: 2025-10-11

Sample exported CSV (MarvellousStudy.csv):

Date,Subject,Duration,Description
2025-10-11,Java Programming,2.5,Practiced ArrayList and TreeMap

■ How to Run :
   • For Compile : javac StudyTracker.java
   • For Run     : java StudyTracker
