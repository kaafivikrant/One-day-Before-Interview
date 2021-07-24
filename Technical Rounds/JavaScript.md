**ES6 Features**

arrows
classes
enhanced object literals
template strings
destructuring
default + rest + spread
let + const
iterators + for..of
generators
unicode
modules
module loaders
map + set + weakmap + weakset
proxies
symbols
subclassable built-ins
promises
math + number + string + array + object APIs
binary and octal literals
reflect api
tail calls

**- What are undeclared and undefined variables?**

Undeclared variables are those that do not exist in a program and are not declared. If the program tries to read the value of an undeclared variable, then a runtime error is encountered.
Undefined variables are those that are declared in the program but have not been given any value. If the program tries to read the value of an undefined variable, an undefined value is returned.

**- What is a prompt box?**

A prompt box is a box which allows the user to enter input by providing a text box. Label and box will be provided to enter the text or number.

 What is 'this' keyword in JavaScript?
This' keyword refers to the object from where it was called.

4 What is the difference between ViewState and SessionState?
ViewState' is specific to a page in a session.
SessionState' is specific to user specific data that can be accessed across all pages in the web application.

5 Explain how can you submit a form using JavaScript?
document.form[0].submit();

6 What is called Variable typing in Javascript?
Variable typing is used to assign a number to a variable and the same variable can be assigned to a string.

7 How can you convert the string of any base to integer in JavaScript?
The parseInt() function is used to convert numbers between different bases. parseInt() takes the string to be converted as its first parameter, and the second parameter is the base of the given string.

8 What would be the result of 3+2+"7"?
Since 3 and 2 are integers, they will be added numerically. And since 7 is a string, its concatenation will be done. So the result would be 57.

9 What are all the types of Pop up boxes available in JavaScript?
Alert
Confirm and
Prompt

10 What is the data type of variables of in JavaScript?
All variables in the JavaScript are object data types.

11  What is the difference between an alert box and a confirmation box?
An alert box displays only one button which is the OK button.
But a Confirmation box displays two buttons namely OK and cancel.

3. What are JavaScript Data Types?

Following are the JavaScript Data types:

Number
String
Boolean
Object
Undefined
4. What is the use of isNaN function?

isNan function returns true if the argument is not a number otherwise it is false.

5. Between JavaScript and an ASP script, which is faster?

JavaScript is faster. JavaScript is a client-side language and thus it does not need the assistance of the web server to execute. On the other hand, ASP is a server-side language and hence is always slower than JavaScript. Javascript now is also a server side language (nodejs).

6. What is negative infinity?

Negative Infinity is a number in JavaScript which can be derived by dividing negative number by zero.

Q12. What are the scopes of a variable in JavaScript?
The scope of a variable is the region of your program in which it is defined. JavaScript variable will have only two scopes.
• Global Variables − A global variable has global scope which means it is visible everywhere in your JavaScript code.
• Local Variables − A local variable will be visible only within a function where it is defined. Function parameters are always local to that function.

Q13. What is the purpose of ‘This’ operator in JavaScript?
The JavaScript this keyword refers to the object it belongs to. This has different values depending on where it is used. In a method, this refers to the owner object and in a function, this refers to the global object.
Q17. What are the variable naming conventions in JavaScript?
The following rules are to be followed while naming variables in JavaScript:

You should not use any of the JavaScript reserved keyword as variable name. For example, break or boolean variable names are not valid.
JavaScript variable names should not start with a numeral (0-9). They must begin with a letter or the underscore character. For example, 123name is an invalid variable name but _123name or name123 is a valid one.
JavaScript variable names are case sensitive. For example, Test and test are two different variables.
Q18. How does TypeOf Operator work?
The typeof operator is used to get the data type of its operand. The operand can be either a literal or a data structure such as a variable, a function, or an object. It is a unary operator that is placed before its single operand, which can be of any type. Its value is a string indicating the data type of the operand.

Q25. What are the ways to define a variable in JavaScript?
The three possible ways of defining a variable in JavaScript are:

Var – The JavaScript variables statement is used to declare a variable and, optionally, we can initialize the value of that variable. Example: var a =10; Variable declarations are processed before the execution of the code.
Const – The idea of const functions is not allow them to modify the object on which they are called. When a function is declared as const, it can be called on any type of object.
Let – It is a signal that the variable may be reassigned, such as a counter in a loop, or a value swap in an algorithm. It also signals that the variable will be used only in the block it’s defined in.
Q26. What is a Typed language?
Typed Language is in which the values are associated with values and not with variables. It is of two types:

Dynamically: in this, the variable can hold multiple types; like in JS a variable can take number, chars.
Statically: in this, the variable can hold only one type, like in Java a variable declared of string can take only set of characters and nothing else.

Q28. What is the difference between the operators ‘==‘ & ‘===‘?
The main difference between “==” and “===” operator is that formerly compares variable by making type correction e.g. if you compare a number with a string with numeric literal, == allows that, but === doesn’t allow that, because it not only checks the value but also type of two variable, if two variables are not of the same type “===” return false, while “==” return true.

Q29. What is the difference between null & undefined?
Undefined means a variable has been declared but has not yet been assigned a value. On the other hand, null is an assignment value. It can be assigned to a variable as a representation of no value. Also, undefined and null are two distinct types: undefined is a type itself (undefined) while null is an object.

Q30. What is the difference between undeclared & undefined?
Undeclared variables are those that do not exist in a program and are not declared. If the program tries to read the value of an undeclared variable, then a runtime error is encountered. Undefined variables are those that are declared in the program but have not been given any value. If the program tries to read the value of an undefined variable, an undefined value is returned.

Q34. What is an event bubbling in JavaScript?
Event bubbling is a way of event propagation in the HTML DOM API, when an event occurs in an element inside another element, and both elements have registered a handle for that event. With bubbling, the event is first captured and handled by the innermost element and then propagated to outer elements. The execution starts from that event and goes to its parent element. Then the execution passes to its parent element and so on till the body element.

Q35. What is NaN in JavaScript?
NaN is a short form of Not a Number. Since NaN always compares unequal to any number, including NaN, it is usually used to indicate an error condition for a function that should return a valid number. When a string or something else is being converted into a number and that cannot be done, then we get to see NaN.

In case you are facing any challenges with these JavaScript Interview Questions, please comment on your problems in the section below.

Q36. How do JavaScript primitive/object types passed in functions?
One of the differences between the two is that Primitive Data Types are passed By Value and Objects are passed By Reference.

By Value means creating a COPY of the original. Picture it like twins: they are born exactly the same, but the first twin doesn’t lose a leg when the second twin loses his in the war.
By Reference means creating an ALIAS to the original. When your Mom calls you “Pumpkin Pie” although your name is Margaret, this doesn’t suddenly give birth to a clone of yourself: you are still one, but you can be called by these two very different names.
Q37. How can you convert the string of any base to integer in JavaScript?
The parseInt() function is used to convert numbers between different bases. It takes the string to be converted as its first parameter, and the second parameter is the base of the given string.

Q40. What is the ‘Strict’ mode in JavaScript and how can it be enabled?
Strict mode is a way to introduce better error-checking into your code.

When you use strict mode, you cannot use implicitly declared variables, or assign a value to a read-only property, or add a property to an object that is not extensible.
You can enable strict mode by adding “use strict” at the beginning of a file, a program, or a function.
Q41. What is a prompt box in JavaScript?
A prompt box is a box which allows the user to enter input by providing a text box. The prompt() method displays a dialog box that prompts the visitor for input. A prompt box is often used if you want the user to input a value before entering a page. When a prompt box pops up, the user will have to click either “OK” or “Cancel” to proceed after entering an input value.

1. Can you name two programming paradigms important for JavaScript app developers?
   JavaScript is a multi-paradigm language, supporting imperative/procedural programming along with OOP (Object-Oriented Programming) and functional programming. JavaScript supports OOP with prototypal inheritance.
   Good to hear:
   Prototypal inheritance (also: prototypes, OLOO).
   Functional programming (also: closures, first class functions, lambdas).
   Red flags:
   No clue what a paradigm is, no mention of prototypal oo or functional programming.
   Learn More:
   The Two Pillars of JavaScript Part 1 — Prototypal OO.
   The Two Pillars of JavaScript Part 2 — Functional Programming.
2. What is functional programming?
   Functional programming produces programs by composing mathematical functions and avoids shared state & mutable data. Lisp (specified in 1958) was among the first languages to support functional programming, and was heavily inspired by lambda calculus. Lisp and many Lisp family languages are still in common use today.
   Functional programming is an essential concept in JavaScript (one of the two pillars of JavaScript). Several common functional utilities were added to JavaScript in ES5.
   Good to hear:
   Pure functions / function purity.
   Avoid side-effects.
   Simple function composition.
   Examples of functional languages: Lisp, ML, Haskell, Erlang, Clojure, Elm, F Sharp, OCaml, etc…
   Mention of features that support FP: first-class functions, higher order functions, functions as arguments/values.
   Red flags:
   No mention of pure functions / avoiding side-effects.
   Unable to provide examples of functional programming languages.
   Unable to identify the features of JavaScript that enable FP.
   Learn More:
   The Two Pillars of JavaScript Part 2.
   The Dao of Immutability.
   Composing Software.
   The Haskell School of Music.
3. What is the difference between classical inheritance and prototypal inheritance?
   Class Inheritance: instances inherit from classes (like a blueprint — a description of the class), and create sub-class relationships: hierarchical class taxonomies. Instances are typically instantiated via constructor functions with the `new` keyword. Class inheritance may or may not use the `class` keyword from ES6.
   Prototypal Inheritance: instances inherit directly from other objects. Instances are typically instantiated via factory functions or `Object.create()`. Instances may be composed from many different objects, allowing for easy selective inheritance.
4. What are the pros and cons of functional programming vs object-oriented programming?
   OOP Pros: It’s easy to understand the basic concept of objects and easy to interpret the meaning of method calls. OOP tends to use an imperative style rather than a declarative style, which reads like a straight-forward set of instructions for the computer to follow.
   OOP Cons: OOP Typically depends on shared state. Objects and behaviors are typically tacked together on the same entity, which may be accessed at random by any number of functions with non-deterministic order, which may lead to undesirable behavior such as race conditions.
   FP Pros: Using the functional paradigm, programmers avoid any shared state or side-effects, which eliminates bugs caused by multiple functions competing for the same resources. With features such as the availability of point-free style (aka tacit programming), functions tend to be radically simplified and easily recomposed for more generally reusable code compared to OOP.
   FP also tends to favor declarative and denotational styles, which do not spell out step-by-step instructions for operations, but instead concentrate on what to do, letting the underlying functions take care of the how. This leaves tremendous latitude for refactoring and performance optimization, even allowing you to replace entire algorithms with more efficient ones with very little code change. (e.g., memoize, or use lazy evaluation in place of eager evaluation.)
   Computation that makes use of pure functions is also easy to scale across multiple processors, or across distributed computing clusters without fear of threading resource conflicts, race conditions, etc…
   FP Cons: Over exploitation of FP features such as point-free style and large compositions can potentially reduce readability because the resulting code is often more abstractly specified, more terse, and less concrete.
   More people are familiar with OO and imperative programming than functional programming, so even common idioms in functional programming can be confusing to new team members.
   FP has a much steeper learning curve than OOP because the broad popularity of OOP has allowed the language and learning materials of OOP to become more conversational, whereas the language of FP tends to be much more academic and formal. FP concepts are frequently written about using idioms and notations from lambda calculus, algebras, and category theory, all of which requires a prior knowledge foundation in those domains to be understood.
5. What are the pros and cons of monolithic vs microservice architectures?
   A monolithic architecture means that your app is written as one cohesive unit of code whose components are designed to work together, sharing the same memory space and resources.
   A microservice architecture means that your app is made up of lots of smaller, independent applications capable of running in their own memory space and scaling independently from each other across potentially many separate machines.
   Monolithic Pros: The major advantage of the monolithic architecture is that most apps typically have a large number of cross-cutting concerns, such as logging, rate limiting, and security features such audit trails and DOS protection.
   When everything is running through the same app, it’s easy to hook up components to those cross-cutting concerns.
   There can also be performance advantages, since shared-memory access is faster than inter-process communication (IPC).
   Monolithic cons: Monolithic app services tend to get tightly coupled and entangled as the application evolves, making it difficult to isolate services for purposes such as independent scaling or code maintainability.
   Monolithic architectures are also much harder to understand, because there may be dependencies, side-effects, and magic which are not obvious when you’re looking at a particular service or controller.
   Microservice pros: Microservice architectures are typically better organized, since each microservice has a very specific job, and is not concerned with the jobs of other components. Decoupled services are also easier to recompose and reconfigure to serve the purposes of different apps (for example, serving both the web clients and public API).
   They can also have performance advantages depending on how they’re organized because it’s possible to isolate hot services and scale them independent of the rest of the app.
   Microservice cons: As you’re building a new microservice architecture, you’re likely to discover lots of cross-cutting concerns that you did not anticipate at design time. A monolithic app could establish shared magic helpers or middleware to handle such cross-cutting concerns without much effort.
   In a microservice architecture, you’ll either need to incur the overhead of separate modules for each cross-cutting concern, or encapsulate cross-cutting concerns in another service layer that all traffic gets routed through.
   Eventually, even monolthic architectures tend to route traffic through an outer service layer for cross-cutting concerns, but with a monolithic architecture, it’s possible to delay the cost of that work until the project is much more mature.
   Microservices are frequently deployed on their own virtual machines or containers, causing a proliferation of VM wrangling work. These tasks are frequently automated with container fleet management tools.
6. What is asynchronous programming, and why is it important in JavaScript?
   Synchronous programming means that, barring conditionals and function calls, code is executed sequentially from top-to-bottom, blocking on long-running tasks such as network requests and disk I/O.
   Asynchronous programming means that the engine runs in an event loop. When a blocking operation is needed, the request is started, and the code keeps running without blocking for the result. When the response is ready, an interrupt is fired, which causes an event handler to be run, where the control flow continues. In this way, a single program thread can handle many concurrent operations.
   User interfaces are asynchronous by nature, and spend most of their time waiting for user input to interrupt the event loop and trigger event handlers.
   Node is asynchronous by default, meaning that the server works in much the same way, waiting in a loop for a network request, and accepting more incoming requests while the first one is being handled.
   This is important in JavaScript, because it is a very natural fit for user interface code, and very beneficial to performance on the server.

1) Explain hoisting in javascript?
   Hoisting is a default behaviour of javascript where all the variable and function declarations are moved on top i.e.the phenomenon of accessing functions and variables in javascript even before initializing them is called hoisting.
2) Explain higher-order functions in javascript.
   Functions that operate on other functions, either by taking them as arguments or by returning them, are called higher-order functions. Higher order functions are a result of functions being first-class citizens in javascript.
3) Explain Closures in JavaScript.
   Closures is the combination of functions bundled together with reference to it's lexical environment. In simple words, Closures is an ability of a function to remember the variables and functions that are declared in its outer scope.
