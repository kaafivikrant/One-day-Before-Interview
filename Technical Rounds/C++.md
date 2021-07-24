What are the different data types present in C++?
The 4 data types in C++ are given below:

Primitive Datatype(basic datatype). Example- char, short, int, float, long, double, bool, etc.
Derived datatype. Example- array, pointer, etc.
Enumeration. Example- enum
User-defined data types. Example- structure, class, etc.

What are class and object in C++?
A class is a user-defined data type that has data members and member functions. Data members are the data variables and member functions are the functions that are used to perform operations on these variables.

An object is an instance of a class. Since a class is a user-defined data type so an object can also be called a variable of that data type.

A class is defined as-

```
class A{
private:
 int data;
public:
 void fun(){

 }
};
```

What is operator overloading?
Operator Overloading is a very essential element to perform the operations on user-defined data types. By operator overloading we can modify the default meaning to the operators like +, -, *, /, <=, etc. 

```
class complex{
private:
 float r, i;
public:
 complex(float r, float i){
  this->r=r;
  this->i=i;
 }
 complex(){}
 void displaydata(){
  cout<<”real part = “<<r<<endl;
  cout<<”imaginary part = “<<i<<endl;
 }
 complex operator+(complex c){
  return complex(r+c.r, i+c.i);
 }
};
int main(){
complex a(2,3);
complex b(3,4);
complex c=a+b;
c.displaydata();
return 0;
}
```

What is polymorphism in C++?
Polymorphism in simple means having many forms. Its behavior is different in different situations. And this occurs when we have multiple classes that are related to each other by inheritance.

For example, think of a base class called a car that has a method called car brand(). Derived classes of cars could be Mercedes, BMW, Audi - And they also have their own implementation of a cars

The two types of polymorphism in c++ are:

Compile Time Polymorphism
Runtime Polymorphism

Explain constructor in C++
The constructor is a member function that is executed automatically whenever an object is created. Constructors have the same name as the class of which they are members so that compiler knows that the member function is a constructor. And no return type is used for constructors.

```
class A{
 private:
  int val;
 public:
  A(int x){             //one argument constructor
   val=x;
  }
  A(){                    //zero argument constructor
  }
}
int main(){
 A a(3);     

 return 0;
}
```

Tell me about virtual function
Virtual function is a member function in the base class that you redefine in a derived class. A virtual function is declared using the virtual keyword. When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.

What do you know about friend class and friend function?
A friend class can access private, protected, and public members of other classes in which it is declared as friends.

Like friend class, friend function can also access private, protected, and public members. But, Friend functions are not member functions.

```
class A{
 private:
  int data_a;
 public:
  A(int x){
   data_a=x;
  }
  friend int fun(A, B);
}
class B{
 private:
  int data_b;
 public:
  A(int x){
   data_b=x;
  }
  friend int fun(A, B);
}
int fun(A a, B b){
 return a.data_a+b.data_b;
}
int main(){
 A a(10);
 B b(20);
 cout<<fun(a,b)<<endl;
 return 0;
}
```

What are the C++ access specifiers?
In C++ there are the following access specifiers:

Public: All data members and member functions are accessible outside the class.

Protected: All data members and member functions are accessible inside the class and to the derived class.

Private: All data members and member functions are not accessible outside the class.

Define inline function
If a function is inline, the compiler places a copy of the code of that function at each point where the function is called at compile time. One of the important advantages of using an inline function is that it eliminates the function calling overhead of a traditional function.

What is a reference in C++?
A reference is like a pointer. It is another name of an already existing variable. Once a reference name is initialized with a variable, that variable can be accessed by the variable name or reference name both.

What do you mean by abstraction in C++?
Abstraction is the process of showing the essential details to the user and hiding the details which we don’t want to show to the user or hiding the details which are irrelevant to a particular user.

Is deconstructor overloading possible? If yes then explain and if no then why?
No destructor overloading is not possible. Destructors take no arguments, so there’s only one way to destroy an object. That’s the reason destructor overloading is not possible.

What do you mean by call by value and call by reference?
In call by value method, we pass a copy of the parameter is passed to the functions. For these copied values a new memory is assigned and changes made to these values do not reflect the variable in the main function.

In call by reference method, we pass the address of the variable and the address is used to access the actual argument used in the function call. So changes made in the parameter alter the passing argument.

What is an abstract class and when do you use it?
A class is called an abstract class whose objects can never be created. Such a class exists as a parent for the derived classes. We can make a class abstract by placing a pure virtual function in the class.

What are destructors in C++?
A constructor is automatically called when an object is first created. Similarly when an object is destroyed a function called destructor automatically gets called. A destructor has the same name as the constructor (which is the same as the class name) but is preceded by a tilde.

```
class A{
 private:
  int val;
 public:
  A(int x){           
   val=x;
  }
  A(){                
  }
  ~A(){                  //destructor
  }
}
int main(){
 A a(3);     
 return 0;
}
```

What are the static members and static member functions?
When a variable in a class is declared static, space for it is allocated for the lifetime of the program. No matter how many objects of that class have been created, there is only one copy of the static member. So same static member can be accessed by all the objects of that class.

A static member function can be called even if no objects of the class exist and the static function are accessed using only the class name and the scope resolution operator ::

Explain inheritance
Inheritance is the process of creating new classes, called derived classes, from existing classes. These existing classes are called base classes. The derived classes inherit all the capabilities of the base class but can add new features and refinements of their own.

What is a copy constructor?
A copy constructor is a member function that initializes an object using another object of the same class.

```
class A{
int x,y;
A(int x, int y){
 this->x=x;
 this->y=y;
}

};
int main(){
A a1(2,3);
A a2=a1;     //default copy constructor is called
return 0;
}
```

Can we call a virtual function from a constructor?
Yes, we can call a virtual function from a constructor. But the behavior is a little different in this case. When a virtual function is called, the virtual call is resolved at runtime. It is always the member function of the current class that gets called. That is the virtual machine doesn’t work within the constructor.

```
class base{
 private:
  int value;
 public:
  base(int x){
   value=x;
  }
  virtual void fun(){
   
  }
}

class derived{
 private:
  int a;
 public:
  derived(int x, int y):base(x){
   base *b;
   b=this;
   b->fun();      //calls derived::fun()
  }
  void fun(){
   cout<<”fun inside derived class”<<endl;
  }
}
```

What is this pointer in C++?
The member functions of every object have a pointer named this, which points to the object itself. The value of this is set to the address of the object for which it is called. It can be used to access the data in the object it points to.

```
class A{
 private:
  int value;
 public:
  void setvalue(int x){
   this->value=x; 
  }
};

int main(){
 A a;
 a.setvalue(5);
 return 0;
}
```

Define namespace in C++.
The namespace is a logical division of the code which is designed to stop the naming conflict.
The namespace defines the scope where the identifiers such as variables, class, functions are declared.
The main purpose of using namespace in C++ is to remove the ambiguity. Ambiquity occurs when the different task occurs with the same name.
For example: if there are two functions exist with the same name such as add(). In order to prevent this ambiguity, the namespace is used. Functions are declared in different namespaces.
C++ consists of a standard namespace, i.e., std which contains inbuilt classes and functions. So, by using the statement "using namespace std;" includes the namespace "std" in our program.

What is the difference between C++ and Java?
The difference between c++ and java are as follows:

– C++ supports goto statements whereas Java does not.
– C++ is majorly used in system programming whereas Java is majorly used in application programming.
– C++ supports multiple inheritance whereas Java does not support multiple inheritance
– C++ supports operator overloading whereas Java does not support operator overloading.
– C++ has pointers which can be used in the program whereas Java has pointers but internally.
– C++ uses a compiler only whereas Java uses both compiler and interpreter.
– C++ has both call by value and call by reference whereas Java supports only call by value.
– C++ supports structures and joins whereas Java does not support structure and joins
– Java supports unsigned right shift operator (>>>) whereas C++ does not.
– C++ is interactive with hardware whereas Java is not that interactive with hardware.

What is stringstream in C++?
Stringstream is a class in c++ which associates a string object with a stream allowing to read from the string as if it were a stream. Syntax is as follows:

stringstream string_name(str);

Basic operations are as follows:

clear()
str()
<<
>>

What is inline function in C++?
Inline functions are functions used to increase the execution time of a program. Basically, if a function is inline, the compiler puts the function code wherever the function is used during compile time. The syntax for the same is as follows:

inline return_type function_name(argument list) {
//block of code
}

What is scope resolution operator in C++?
Scope resolution operator in c++ is denoted by double colon (::). It can be used:

– when there is a local variable with same name as of global variable
– When a function has to be defined outside a class
– When class’s static variables needs to be accessed
– When a class inside another class has to be referred
– In case of multiple Inheritance

How to remove segmentation fault in C++?
Segmentation fault indicates an error memory corruption. In layman terms, when a piece of code tries to do read and write operation in a read only location in memory. Below are the reasons and solutions for segmentation error:

What is stl in C++ with example?
STL in C++ is a library and abbreviation of Standard Template Library. STL is a generalized library that provides common programming data structures/ container classes, functions, algorithms, and iterators. STL has four components

– Algorithms: Searching and sorting algorithms such as binary search, merge sort etc.
– Containers: Vector, list, queue, arrays, map etc.
– Functions: They are objects that act like functions.
– Iterators: It is an object that allows transversing through elements of a container, e.g., vector<int>::iterator.

 Why do we need the Friend class and function?
Answer: Sometimes, there is a need for allowing a particular class to access private or protected members of a class. The solution is a friend class, which can access the protected and private members of the class in which it is declared as a friend.

Similar to the friend class, a friend function is able to access private and protected class members. A friend function can either be a global function or a method of some class.

Some important points about friend class and friend function:

Friendship is not inherited.
Friendship isn’t mutual, i.e., if some class called Friend is a friend of some other class called NotAFriend, then it doesn’t automatically become a friend of the Friend class.
The total number of friend classes and friend functions should be limited in a program as the overabundance of the same might lead to a depreciation of the concept of encapsulation of separate classes, which is an inherent and desirable quality of object-oriented programming.

Explain the significance of vTable and vptr in C++ and how the compiler deals with them
Answer: vTable is a table containing function pointers. Every class has a vTable. vptr is a pointer to vTable. Each object has a vptr. In order to maintain and use vptr and vTable, the C++ compiler adds additional code at two places:

In every constructor – This code sets vptr:
Of the object being created
To point to vTable of the class
Code with the polymorphic functional call – At every location where a polymorphic call is made, the compiler inserts code in order to first look for vptr using the base class pointer or reference. The vTable of a derived class can be accessed once the vptr is successfully fetched. Address of derived class function show() is accessed and called using the vTable.

What is the main difference between the keyword struct and class?
Answer: The keyword struct is used for resembling public members by default, while the keyword class is used for resembling private members by default.

Explain Virtual Functions and the concept of Runtime Polymorphism in C++ with a code example.
Answer: Any function when accompanying the virtual keyword exhibits the behavior of a virtual function. Unlike normal functions that are called in accordance with the type of pointer or reference used, virtual functions are called as per the type of the object pointed or referred.

In simple terms, virtual functions resolve at runtime, not anytime sooner. Use of virtual functions could also be understood as writing a C++ program leveraging the concept of runtime polymorphism. Things essential to writing a virtual function in C++ are:

A base class
A derived class
A function with the same name in both the classes i.e. the base class and the derived class
A pointer or reference of base class type that points or refers, respectively to an object of the derived class.

```
#include 
 using namespace std;
 class Base { 
 public: 
 virtual void show() { cout<<" In Base \n"; } 
 };
 class Derived: public Base { 
 public: 
 void show() { cout<<"In Derived \n"; } 
 }; 
 
 int main(void) { 
 Base *bp = new Derived; 
 bp->show(); // <- Runtime Polymorphism in Action
 return 0;
}
```

Define the Copy Constructor used in C++ along with its general function prototype. Also, explain the various scenarios in which it is called.
Answer: A member function that initializes an object using another object of the same class is known as a copy constructor in C++. Copy Constructor can also be made private. A call to the Copy Constructor can happen in any of the following 4 scenarios when:

The compiler generates a temporary object
An object is constructed or based on some another object of the same class
An object of the class is returned by value
An object of the class is passed (i.e., to a function) by value as an argument
The general function prototype for the Copy Constructor is:

ClassName (const ClassName &old_obj);
Point(int x1, int y1) { x=x1; y=y1;}
Point(const Point &p2) { x=p2.x; y=p2.y; }

What is a mutable storage class specifier? How can they be used?
Answer: A mutable storage class specifier is applied only on the class's non-static and non-constant member variable. It is used for altering the constant class object's member by declaring it. This can be done by using a storage class specifier.

Define an Abstract class in C++?
Answer: An abstract class in C++ is referred to as the base class, which has at least one pure virtual function. In such a function, a person cannot instantiate an abstract class. This way, an Abstract class a pure virtual function is defined by using a pure specifier which is equal to zero during the declaration of the virtual member function in the class declaration

```
// An abstract class
class Test
{ 
    // Data members of class
public:
    // Pure Virtual Function
    virtual void show() = 0;
   /* Other members */
};
```

What are the functions of the scope resolution operator?
Answer: The functions of the scope resolution operator include the following.

It helps in resolving the scope of various global variables.
It helps in associating the function with the class when it is defined outside the class.

```
#include <iostream>  
using namespace std;  
int my_var = 0;
int main(void) {
   int my_var = 0;
   ::my_var = 1;  // set global my_var to 1
   my_var = 2;    // set local my_var to 2
   cout << ::my_var << ", " << my_var;
   return 0;
}
```

What is the ‘diamond problem’ that occurs with multiple inheritance in C++? Explain using an example.
Answer: The diamond problem in C++ represents the inability of the programming language to support hybrid inheritance using multiple and hierarchical inheritance.

Suppose we have a university with some faculty members and some graduate students. A simple inheritance scheme in this scenario might have different types of people in different roles. However, all of them inherit from the same Person class.

The Person class defines an abstract getRole() method that would then be overridden by its subclasses in order to return the correct role type. Things up till this point is simple, however, if we wish to model the role of a TA or Teaching Assistant then things get weird.

A Teaching Assistant is both a student and a faculty member. This will yield the diamond problem, as illustrated in the figure below:

The problem generates an inheritance diagram resembling a diamond, hence the name, diamond problem.

Which getRole() implementation should the Teaching Assistant inherit? Graduate Student or the Faculty Member? A potential answer might be to have the Teaching Assistant class override the getRole() method and return a newly-defined role, say TA.

However, such an answer would also be far from complete as it will hide the fact that a teaching assistant is both a faculty member and a graduate student.

Local and Global scope of a variable.

Answer: The scope of a variable is defined as the extent of the program code within which the variable remains active i.e. it can be declared, defined or worked with.

There are two types of scope in C++:

Local Scope: A variable is said to have a local scope or is local when it is declared inside a code block. The variable remains active only inside the block and is not accessible outside the code block.
Global Scope: A variable has a global scope when it is accessible throughout the program. A global variable is declared on top of the program before all the function definitions.

What is a Constant? Explain with an example.

Answer: A constant is an expression that has a fixed value. They can be divided into integer, decimal, floating-point, character or string constants depending on their data type.

Apart from the decimal, C++ also supports two more constants i.e. octal (to the base 8) and hexadecimal (to the base 16) constants.

Examples of Constants:

75 //integer (decimal)
0113 //octal
0x4b //hexadecimal
3.142 //floating point
‘c’ //character constant
“Hello, World” //string constant

State the difference between Pre and Post Increment/Decrement Operations.

Answer: C++ allows two operators i.e ++ (increment) and –(decrement), that allow you to add 1 to the existing value of a variable and subtract 1 from the variable respectively. These operators are in turn, called increment (++) and decrement (–).

Explain Pass by Value and Pass by Reference.

Answer: While passing parameters to the function using “Pass by Value”, we pass a copy of the parameters to the function.

Hence, whatever modifications are made to the parameters in the called function are not passed back to the calling function. Thus the variables in the calling function remain unchanged.

State the difference between delete and delete[].

Answer: “delete[]” is used to release the memory allocated to an array which was allocated using new[]. “delete” is used to release one chunk of memory which was allocated using new.

Explain Register Storage Specifier.

Answer: “Register” variable should be used whenever the variable is used. When a variable is declared with a “register” specifier, then the compiler gives CPU register for its storage to speed up the lookup of the variable.

When to use “const” reference arguments in a function?

Answer: Using “const” reference arguments in a function is beneficial in several ways:

“const” protects from programming errors that could alter data.
As a result of using “const”, the function is able to process both const and non-const actual arguments, which is not possible when “const” is not used.
Using a const reference will allow the function to generate and use a temporary variable in an appropriate manner.

Difference between Class and Structure.

Answer:

Structure: In C language, the structure is used to bundle different types of data types together. The variables inside a structure are called the members of the structure. These members are by default public and can be accessed by using the structure name followed by a dot operator and then the member name.

Class: Class is a successor of the Structure. C++ extends the structure definition to include the functions that operate on its members. By default all the members inside the class are private.

What is Namespace?

Answer: Namespace allows us to group a set of global classes, objects and/or functions under a specific name.

The general form to use namespaces is:

namespace identifier { namespace-body }

Where identifier is any valid identifier and the namespace-body is the set of classes, objects, and functions that are included within the namespace. Namespaces are especially useful in the case where there is a possibility for more than one object to have the same name, resulting in name clashes.

What is the use of ‘using’ declaration?

Answer: Using Declaration is used to refer a name from the namespace without the scope resolution operator.

What is Name Mangling?

Answer: C++ compiler encodes the parameter types with function/method into a unique name. This process is called name mangling. The inverse process is called as demangling.

Example:

A::b(int, long) const is mangled as ‘b__C3Ail’.

For a constructor, the method name is left out.

That is A:: A(int, long) const is mangled as ‘C3Ail’.

What are the various Access Specifiers in C++?

Answer: C++ supports the following access specifiers:

Public: Data members and functions are accessible outside the class.
Private: Data members and functions are not accessible outside the class. The exception is the usage of a friend class.
Protected: Data members and functions are accessible only to the derived classes.

What is a Constructor and how is it called?

Answer: Constructor is a member function of the class having the same name as the class. It is mainly used for initializing the members of the class. By default constructors are public.

There are two ways in which the constructors are called:

Implicitly: Constructors are implicitly called by the compiler when an object of the class is created. This creates an object on a Stack.
Explicit Calling: When the object of a class is created using new, constructors are called explicitly. This usually creates an object on a Heap.

```
class A{
 int x; int y; 
 public A() : x(0) , y(0) {} //default (no argument) constructor
 };
 main()
 {
                    A Myobj; // Implicit Constructor call. In order to allocate memory on stack,
                                    //the default constructor is implicitly called.
                  A * pPoint = new A(); // Explicit Constructor call. In order to allocate
                                                  //memory on HEAP we call the default constructor.
 }
```

What is a COPY CONSTRUCTOR and when is it called?

Answer: A copy constructor is a constructor that accepts an object of the same class as its parameter and copies its data members to the object on the left part of the assignment. It is useful when we need to construct a new object of the same class.

```
class A{
             int x; int y;
             public int color;
             public A() : x(0) , y(0) {} //default (no argument) constructor
             public A( const A& ) ;
};
A::A( const A & p )
{
              this->x = p.x;
              this->y = p.y;
              this->color = p.color;
}
main()
{
            A Myobj;
            Myobj.color = 345;
            A Anotherobj = A( Myobj ); // now Anotherobj has color = 345
}
```

What is a Conversion Constructor?

Answer: It is a constructor that accepts one argument of a different type. Conversion constructors are mainly used for converting from one type to another.

What is an Explicit Constructor?

Answer: A conversion constructor is declared with the explicit keyword. The compiler does not use an explicit constructor to implement an implied conversion of types. Its purpose is reserved explicitly for construction.

What is the role of the Static keyword for a class member variable?

Answer: The static member variable shares a common memory across all the objects created for the respective class. We need not refer to the static member variable using an object. However, it can be accessed using the class name itself.

Explain Function Overloading and Operator Overloading.

Answer: C++ supports OOPs concept Polymorphism which means “many forms”.

In C++ we have two types of polymorphism, i.e. Compile-time polymorphism, and Run-time polymorphism. Compile-time polymorphism is achieved by using an Overloading technique. Overloading simply means giving additional meaning to an entity by keeping its base meaning intact.

C++ supports two types of overloading:

Function Overloading:

Function overloading is a technique that allows the programmer to have more than one function with the same name but different parameter list. In other words, we overload the function with different arguments i.e. be it the type of arguments, number of arguments or the order of arguments.

Function overloading is never achieved on its return type.

Operator Overloading:

This is yet another type of compile-time polymorphism that is supported by C++. In operator overloading, an operator is overloaded, so that it can operate on the user-defined types as well with the operands of the standard data type. But while doing this, the standard definition of that operator is kept intact.

For Example, an Addition operator (+) that operates on numerical data types can be overloaded to operate on two objects just like an object of complex number class.

What is the difference between a Copy Constructor and an Overloaded Assignment Operator?

Answer: A copy constructor and an overloaded assignment operator basically serve the same purpose i.e. assigning the content of one object to another. But still, there is a difference between the two.

Example:

complex c1,c2;
c1=c2; //this is assignment
complex c3=c2; //copy constructor
In the above example, the second statement c1 = c2 is an overloaded assignment statement.

Here, both c1 and c2 are already existing objects and the contents of c2 are assigned to the object c1. Hence, for overloaded assignment statement both the objects need to be created already.

Next statement, complex c3 = c2 is an example of the copy constructor. Here, the contents of c2 are assigned to a new object c3, which means the copy constructor creates a new object every time when it executes.

What are Multiple Inheritances (virtual inheritance)? What are its advantages and disadvantages?

Answer: In multiple inheritances, we have more than one base classes from which a derived class can inherit. Hence, a derived class takes the features and properties of more than one base class.

For Example, a class driver will have two base classes namely, employee and a person because a driver is an employee as well as a person. This is advantageous because the driver class can inherit the properties of the employee as well as the person class.

But in the case of an employee and a person, the class will have some properties in common. However, an ambiguous situation will arise as the driver class will not know the classes from which the common properties should be inherited. This is the major disadvantage of multiple inheritances.

What are the benefits of Operator Overloading?

Answer: By overloading standard operators on a class, we can extend the meaning of these operators, so that they can also operate on the other user-defined objects.

Function overloading allows us to reduce the complexity of the code and make it more clear and readable as we can have the same function names with different argument lists.

