
    Folder                | Description
    -------------------   | -----------------------------------------
    `1_Requirements`      | Documents detailing requirements and research
    '2_Architecture'      | Documents specifying design details
    `3_Implementation`    | All code and documentation
    '4_TestPlanAndOutput' | All High lavel and Low lavel problems
    '5_Report'            | Its about how to run the pograme
    '6_ImageAndVideo'     | Store images only


# Requirements: #

# Library Management System #

WHAT IS THE PURPOSE OF A LIBRARY MANAGEMENT SYSTEM?
======================================================
The purpose of a library management system is to operate a library with efficiency and at reduced costs. The system being entirely automated streamlines all the tasks involved in operations of the library. The activities of book purchasing, cataloging, indexing, circulation recording and stock checking are done by the software. Such software eliminates the need for repetitive manual work and minimizes the chances of errors.

The library management system software helps in reducing operational costs. Managing a library manually is labor intensive and an immense amount of paperwork is involved. An automated system reduces the need for manpower and stationery. This leads to lower operational costs.

The library management system software makes the library a smart one by organizing the books systematically by author, title and subject. This enables users to search for books quickly and effortlessly.


HOW DO YOU DESIGN A LIBRARY
MANAGEMENT SYSTEM?
=============================

Library management systems are designed to manage the movement of books and maintain records of the members in a library. The software solution is designed based on the system requirements, the people involved, the content of the operation and the activity to be performed.

The system requirement in library management focuses on the possibility of search for books by title, author or subject by the member. They should be able to locate a book physically by the unique identification code and the rack number for each book. The system should provide details on the books held by the members. The system should limit the number of books that can be taken and the number of days that a book can be kept for. The system should generate fines when due from the member.
The next step focuses on the functions of the librarian, the member and the system. Managing books by the librarian, searching for books by the members and notifications sent by the system are detailed in a case diagram.


WHAT SYSTEM DOES A LIBRARY USE?
======================================

The library management system software should be user-friendly and cost effective. It should be in tune with the establishment’s needs and compatible with the existing technology.


A library should use a software system that helps in effectively managing the data in a library. The library database includes all relevant information regarding assets to membership details. The software records details on all reading and reference material available for reading and lending. Membership information, lending details and renewal dates are managed by the software.

HOW DO YOU MANAGE A LIBRARY?
=====================================

Managing a library requires knowledge of library management and skills to perform the activities. The task involves planning, decision making, organizing, collecting and disbursing information and controlling and monitoring the various functions.

The management should have an objective for running the library. They should have a clear idea of the members they wish to serve. The selection of books in different categories is dependent on the interests of the members.
An understanding of the organizational hierarchy will enable proper delegation of responsibilities to the personnel employed. Governmental regulations regarding structure, space and systems should be in place.

## SWOT ANALYSIS:

## Strengths :
Assessing a library's strengths, areas in which it is already successful, includes looking at staff skills and competencies, programming, budget maintenance and community relations. Planning for the library's future based on its strengths should include ways to maintain and improve existing success.

## Weaknesses :
Analyzing a library's weaknesses also means evaluating internal operations. G. Edward Evans and Patricia Layzell Ward, authors of "Management Basics for Information Professionals," point out that weaknesses may lie in the same areas as strengths. Careful analysis of library weaknesses suggests which areas need improvement. Weaknesses also identify areas that need attention to reduce the negative impact of their weaknesses.

## Opportunities :
Factors outside the library itself should be evaluated to see what could be acted upon to benefit the library. Library opportunities may present themselves in "economic, political/legal, technological, or sociocultural environments," says Anthony C. Danca in his analysis of SWOT. For example, awareness of a high economic status of the library's main patron base provides a population likely to participate in fund-raising activities.

## Threats :
Analyzing library threats also means evaluating factors outside the library that hinder its success. Like opportunities, many threats stem from the economic and political environment, says Danca. For example, economic downturns threaten to reduce the budgets of publicly funded libraries. Maintaining current awareness of threats allows the library administration to plan and act. This area requires frequent attention because the external environment often changes quickly.

## 4W's and 1H's:

WHAT : The library management system software makes the library a smart one by organizing the books systematically by author, title and subject. This enables users to search for books quickly and effortlessly.

WHERE : Used in library.

WHEN : At library.

WHY : The library management system software should be user-friendly and cost effective. It should be in tune with the establishment’s needs and compatible with the existing technology.

HOW : Managing a library requires knowledge of library management and skills to perform the activities. The task involves planning, decision making, organizing, collecting and disbursing information and controlling and monitoring the various functions.

## HIGH LEVEL REQIUREMENTS:

1.Provide the information regarding books.
2.Search for the required books from database.
3.Add new book to the database.
4. Add the cost of book
5. Add the author name of book.
6.Update the number of books in database.
7.Enter data of book in Database.
8.Information of books.

## LOW LEVEL REQUIREMENTS:

1.Computer System.
2.Networking Device.
3.Software.
4.Database.
5.Server.


ADVANTAGES OF LIBRARY MANAGEMENT SYSTEM SOFTWARE:
===================================================
===================================================

User friendly system:
---------------------

The library management systems are simple and easy to use for the librarian as well as the students. The system provides online and offline storage of data. The system automatically updates and backups data. The system is flexible and can be adapted to the needs of the institution.

Simplification of librarian duties:
-----------------------------------

The system allows the librarian to maintain a wide collection of books, periodicals, journals, audio and video books and pictorials. The librarian operations of addition and deletion of books, tracking books, tracing missing books, reserving books can be performed very easily.

Increased member engagement:
---------------------------

The web based library management system software can be easily accessed from anywhere and at any time. The members can search for books from classrooms, computer labs, home and places where the internet is available. The system provides access from smartphones and tablets to search books and resources. The easy access increases engagement of the users.

Efficient data management:
--------------------------

The library management system software hosted from a cloud platform is very efficient. The functions of cataloging, indexing, referencing and circulation of books are managed automatically and saved on the cloud for reliable and secure operations.

Time and effort saver:
-----------------------

The automated library system software eliminates the need for manual entries. This saves the effort and time consumed in data entry. Automation makes the database error free and accurate.

Automated reports:
-------------------

The system reports the performance of the library automatically. Charts and graphs are provided for review and tracking of the library functions. This aids in making changes and improvements to the library.


# TEST PLAN:

## Table no: High level test plan
# TEST PLAN:


| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P**      | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------ |-------------     |----------------|------------------|
|  H_01       |Add book information                                          | 1           |Enter book name   |Enter book name |Requirement based |
|  H_02       |Display book information                                      | 2           |Displays book information|Displays book information|Scenario based    |
|  H_03       |List all books of given author                                | 3           |Enter author name|Enter author name|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |List the title of specified book                              | 5          |displays the count of books|displays the count of books|Requirement based |
|  L_02       |N.of books in library                                         |            |counts no.of books|counts the no.of books|Scenario based    |
|  L_03       |Exit                                                          | 6          |exits the window|exits from the window|Boundary based    |

 


