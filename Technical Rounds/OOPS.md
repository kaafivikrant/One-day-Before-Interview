1. Object Oriented Programming
    i. Encapuslation
    
    ii. Data Abstraction
        -> Access modifiers
            a. Private
            b. Protected
            c. Public
        -> Friend functions
    iii. Polymorphism
        -> Static
            a. Operator Overloading
            b. Function Overloading
        -> Dynamic/Runtime
            a. Virtual Functions
                -> vtable
                -> vptr
    iv. Inheritance
        -> Modes
            a. Public
            b. Protected
            c. Private 
        -> Types
            a. Single
            b. Multiple
            c. Multilevel
            d. Hierarchical
            e. Hybrid

Encapsulation:- Defined as wrapping up of data and information under a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulates them.

{Method + Variables}=Class 
we use private keyword for the hiding the data from the outside world data hiding.
we use public keyword to allow other functions to access it.

Data Abstraction:- The most essential and important feature of object oriented programming in C++. Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.

Abstraction using Classes: We can implement Abstraction in C++ using classes. Class helps us to group data members and member functions using available access specifiers. A Class can decide which data member will be visible to outside world and which is not.

Abstraction in Header files: One more type of abstraction in C++ can be header files. For example, consider the pow() method present in math.h header file. Whenever we need to calculate power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating power of numbers.

Difference between Encapsulation and Abstraction:-

1.	Abstraction is the process or method of gaining the information.	

While encapsulation is the process or method to contain the information.

2.	In abstraction, problems are solved at the design or interface level.	

While in encapsulation, problems are solved at the implementation level.

3.	Abstraction is the method of hiding the unwanted information.	

Whereas encapsulation is a method to hide the data in a single entity or unit along with a method to protect information from outside.

4.	We can implement abstraction using abstract class and interfaces.	

Whereas encapsulation can be implemented using by access modifier i.e. private, protected and public.

5.	In abstraction, implementation complexities are hidden using abstract classes and interfaces.	

While in encapsulation, the data is hidden using methods of getters and setters.

6.	The objects that help to perform abstraction are encapsulated.	

Whereas the objects that result in encapsulation need not be abstracted.


Polymorphism:- C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.

Polymorphism -> Compile time and Run time

Compile Time Polymorphism-> Function Overloading and Operator Overloading
Run Time Polymorphism-> Virtual Functions

Function Overloading:- When there are multiple functions with same name but different parameters then these functions are said to be overloaded. Functions can be overloaded by change in number of arguments or/and change in type of arguments.

Operator Overloading:- We can change the way operators work for user-defined types like objects and structures.