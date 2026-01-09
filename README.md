# Person Class and Library
# Program Requirements: 
In our first program, you are to write a Person class. We’ll be using this Person class all semester in our programs. It is important that you follow the program spec here. 

Obtain the Person.h, Date.h and cpp from Brightspace. The Date class is an updated version of the Date class that is presented in Johnston's _C++ Programming Today_, Chapter 7. Use this modified Date class (Date.h and cpp) for your Person class.

The Person has a defaulted constructor.  It also has two overloaded constructors. Use constructor initializers for them. One constructor has the name string and a Date object as inputs.  The other has the name string, and three ints for the month, day, and year.
Once a person’s information is passed into the object, the class automatically determines and assigns the person’s age. (Do leap years need to be considered in your calculations?) 
The Person class has a Set function for a name string, a Set for the birthday (as a Date), and a Set for the birthday (as three ints). 

Also, we will consider that the description in the Date class is the name of the Person.

The Person class has several get functions: GetName returns the name. The GetNameAge returns a string with the person’s name and age (in years). The GetFullDescr returns a string that is formatted with a newline, and then the name, age, and birthday. (Use Date’s GetFormattedDate() for this!) 

The Person class has overloaded < and > that are used to compare the name for alphabetic order. That is, Person, object A (name BROWN, JOHN) and Person object B (name JONES, BILL). 
	
  if( A < B)   //would return true
  
  if(B < A )  //would return false

Programming note: For this program, we will not assume that the input dates have valid date values, and we will use the year_month_day ok() method to check their validity.  
The function of the TestDriver is to test the class using all of its constructors and set and get methods to make sure everything works.  Also, test the overloaded operators.

# Steps for this Assignment: 
1.	Create your LastnameP1 project file. 
2.	Copy the Person.h, Date.h, Date.cpp into the folder and add to the project.
3.	Write your TestDriver.cpp and Person.cpp
4.	Once you have everything perfect and you’re convinced your Person class works correctly, you’ll build a Static Library for your Person class, see below.
5.	Then create a new project, named LastnameTesterP1, which uses the static library, see below.

# **How to make a Static Library File**
1.	Open the Visual Studio 2022 Get Started Page.
2.	Select **Create a New Project.** 
3.	At the top of the Dialog Window, set **Language** to **C++**, set **Platform** to **Windows**, and set **Project type** to **Library**
4.	Choose Static Library, then click Next.
5.	**Be sure you go to Properties and set your project to C++20.***
6.	Name the project **LastnamePerson** and specify the location for the project, then click the **Create** button.
7.	First, this project is built for pre-compiled headers.  To disable pre-compiled headers, open the project’s properties  -> Configuration Properties -> C/C++ _> PreCompiled Headers.  Set Precompiled headers to Not Using Precompiled Headers.  Click Apply and Ok.  Then you can delete pch.h, pch.cpp.
8.	Second, there are two extra files for providing library functions.  We are not doing this; we are making a library out of our classes.  Delete framework.h and LastnamePerson.cpp.
9.	Copy the Person.h, Person.cpp, Date.h, and Date.cpp into the solution folder where the source code belongs.
10.	Add your four (existing) files to the project in the Solution Explorer. 
11.	Build solution.  You will find LastnamePerson.lib in the LastnamePerson\Debug folder.  It looks like this:</br>
     <img width="197" height="21" alt="image" src="https://github.com/user-attachments/assets/706682ba-8ae2-4bf8-911b-db8128fd4096" />
13.	Copy your library somewhere else so you can find it. Close your Library project.

# **Project for testing your lib. Create another VS project. Name it LastnameTesterP1:**
1.	Create a New Project.  Name it something like LastnameTesterP1.
2.	At the top of the Dialog Window, set **Language** to **C++**, set **Platform** to **All Platforms**, and set **Project type** to Console.
3.	Select Empty Project.
4.	Be sure you go to Properties and set your project to C++20.
5.	Copy and add your Person.h, Date.h, and TestDriver.cpp into your project folders.  Then add them to your Visual Studio project.
6.	If you try to build this, you’ll get a lot of LNK errors, since the project can’t find the classes.  The class code is in the .lib file.
7.	Make a copy of the LastnamePerson.lib file and place it into the folder where the Person.h, Date.h, and Driver.cpp are located in your Tester project.
8.	In the Solution Explorer window (on the left in the IDE), right-click the project name, and go to properties for the LastnameTesterP1 project.  Or click on Project  PropertiesConfiguration Properties Linker.
9.	Under LinkerInputAdditional Dependencies, click into space, pick drop-down arrow, Edit, add your library name, LastnamePerson.lib.
10.	Now the project should build and run.  Theoretically

It is usually not practical to put your lib files in your project folder. Usually libs are located somewhere else (as they will be later in the semester). If the .lib file was not with the source code, say, in another directory, you have to tell the project where to look for the .lib. Under Linker General Additional Library Directories, select edit and add the absolute path.

But if you don’t have your library in your project, I will not be able to run it! 


