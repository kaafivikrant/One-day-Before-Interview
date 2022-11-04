**Concepts**

<!-- **ES6 Features**
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
=======
>>>>>>> 9f9aa59adde5a19f5fb6781be5e40dfa14342661 -->

**-What is a Callback?**

Simply put: A callback is a function that is to be executed after another function has finished executing — hence the name ‘call back’.
More complexly put: In JavaScript, functions are objects. Because of this, functions can take functions as arguments, and can be returned by other functions. Functions that do this are called higher-order functions. Any function that is passed as an argument is called a callback function.

```
const FunA = (callfriend) =>{ 
    console.log("Welcome to A");
    callfriend();
}

const FunB = () =>{
    console.log("Welcome to B");
}

FunA(FunB);

// 
'Welcome to A'




'Welcome to B'
```

**-What is Promises**

A promise is an object that may produce a single value some time in the future: either a resolved value, or a reason that it’s not resolved (e.g., a network error occurred). A promise may be in one of 3 possible states: fulfilled, rejected, or pending. Promise users can attach callbacks to handle the fulfilled value or the reason for rejection.

```
firstRequest(function(response) {  
    secondRequest(response, function(nextResponse) {  
        thirdRequest(nextResponse, function(finalResponse) {   
            console.log('Final response: ' + finalResponse);  
        }, failureCallback);  
    }, failureCallback);
}, failureCallback);

firstRequest()
  .then(function(response) {
    return secondRequest(response);
}).then(function(nextResponse) {  
    return thirdRequest(nextResponse);
}).then(function(finalResponse) {  
    console.log('Final response: ' + finalResponse);
}).catch(failureCallback);
```

**-What is Async and Await?**

An async function is a function declared with the async keyword. Async functions are instances of the AsyncFunction constructor, and the await keyword is permitted within them. The async and await keywords enable asynchronous, promise-based behavior to be written in a cleaner style, avoiding the need to explicitly configure promise chains.

```
Async Await
function scaryClown() {
    return new Promise(resolve => {
      setTimeout(() => {
        resolve('😱');
      }, 2000);
    });
  }
  
  async function msg() {
    const msg = await scaryClown();
    console.log('Message:', msg);
  }
  
msg(); // Message: 😱 <-- after 2 seconds
```

**-What is Clousers ?**
A closure is the combination of a function bundled together (enclosed) with references to its surrounding state (the lexical environment). In other words, a closure gives you access to an outer function’s scope from an inner function. In JavaScript, closures are created every time a function is created, at function creation time.

```
const outerFunc = (a) =>{
    let b=10;
    const innerFunc = () =>{
        let sum = a + b;
        console.log(sum);
    }
    return innerFunc;
}

let inner  = outerFunc(5);

inner();
```

**-What is Callback Hell ?**

If you are not expecting your application logic to get too complex, a few callbacks seem harmless. But once your project requirements start to swell, you will quickly find yourself piling layers of nested callbacks. Congrats! Welcome to Callback Hell.

Constructing a callback hell

Get ingredients (we’re gonna assume it’s a beef burger)
Cook the beef
Get burger buns
Put the cooked beef between the buns
Serve the burger

Solutions to callback hell

Write comments
Split functions into smaller functions
Using Promises
Using Async/await

```
a(function(resultA){
    b(resultA, function(resultB){
        c(resultB, function(resultC){
            d(resultC, function(resultD){
                e(resultD, function(resultE){
                    f(resultE, function(resultF){
                        g(resultF, function(resultG){
                            i(resultG, function(resultH){
                                j(resultH, function(resultI){
                                    console.log(resultI);
                                    console.log("hiii");
                                })
                            })
                        })
                    })
                })
            })
        })
    })
});

a();
```

**INTERVIEW QUESTIONS**

**-What is Node.js? What is it used for?**

Node.js is a run-time JavaScript environment built on top of Chrome’s V8 engine.
It uses an event-driven, non-blocking I/O model. It is lightweight and so efficient.
Node.js has a package ecosystem called npm.
Node.js can be used to build different types of applications such as web application, real-time chat application, REST API server etc.

**-What is Event-driven programming?**

Event-driven programming is building our application based on and respond to events. When an event occurs, like click or keypress, we are running a callback function which is registered to the element for that event.

**-What is Event loop in Node.js work? And How does it work?**

The Event loop handles all async callbacks. Node.js (or JavaScript) is a single-threaded, event-driven language. This means that we can attach listeners to events, and when a said event fires, the listener executes the callback we provided.
Whenever we are call setTimeout, http.get and fs.readFile, Node.js runs this operations and further continue to run other code without waiting for the output. When the operation is finished, it receives the output and runs our callback function.
So all the callback functions are queued in an loop, and will run one-by-one when the response has been received.

**-What is REPL in Node.js?**

REPL means Read-Eval-Print-Loop. It is a virtual environment that comes with Node.js. We can quickly test our JavaScript code in the Node.js REPL environment.
To launch the REPL in Node.js, just open the command prompt and type node. It will change the prompt to > in Windows and MAC.
Now we can type and run our JavaScript easily. For example, if we type 10 + 20, it will print 30 in the next line.

**-What is the difference between synchronous and asynchronous in node js?**

In synchronous functions, statements complete before the next statement is run. In this case, the program is evaluated exactly in order of the statements and execution of the program is paused if one of the statements take a very long time.

Asynchronous functions usually accept a callback as a parameter and execution continue on the next line immediately after the asynchronous function is invoked. The callback is only invoked when the asynchronous operation is complete and the call stack is empty. Heavy duty operations such as loading data from a web server or querying a database should be done asynchronously so that the main thread can continue executing other operations instead of blocking until that long operation to complete (in the case of browsers, the UI will freeze).

// This function is synchronous

```
function log(arg) {
    console.log(arg)
}

log(1);

// This function is asynchronous
setTimeout(() => {
    console.log(2)
}, 0);

log(3)
```

**-What is Tracing in Node.js?**

Tracing provides a mechanism to collect tracing information generated by V8, Node core and userspace code in a log file. Tracing can be enabled by passing the --trace-events-enabled flag when starting a Node.js application.

**-How will you debug an application in Node.js?**

Node.js includes a debugging utility called debugger. To enable it start the Node.js with the debug argument followed by the path to the script to debug.
Inserting the statement debugger; into the source code of a script will enable a breakpoint at that position in the code

**-Difference between setImmediate() vs setTimeout()**

setImmediate() and setTimeout() are similar, but behave in different ways depending on when they are called.
setImmediate() is designed to execute a script once the current poll (event loop) phase completes.
setTimeout() schedules a script to be run after a minimum threshold in ms has elapsed.

**-What is package.json? What is it used for?**

This file holds various metadata information about the project. This file is used to give information to npm that allows it to identify the project as well as handle the project's dependencies.

Some of the fields are: name, name, description, author and dependencies.
When someone installs our project through npm, all the dependencies listed will be installed as well. Additionally, if someone runs npm install in the root directory of our project, it will install all the dependencies to ./node_modules directory.

**-What is libuv?**

Some of the features of libuv are:

Full-featured event loop backed by epoll, kqueue, IOCP, event ports.
Asynchronous TCP and UDP sockets
Asynchronous file and file system operations
Child processes
File system events

**-What are some of the most popular modules of Node.js?**

express
async
browserify
socket.io
bower
gulp
grunt

**-What is EventEmitter in Node.js?**

All objects that emit events are instances of the EventEmitter class. These objects expose an eventEmitter.on() function that allows one or more functions to be attached to named events emitted by the object.

When the EventEmitter object emits an event, all of the functions attached to that specific event are called synchronously.

**-What is the difference between readFile vs createReadStream in Node.js?**

readFile — is for asynchronously reads the entire contents of a file. It will read the file completely into memory before making it available to the User. readFileSync is synchronous version of readFile.

createReadStream — It will read the file in chunks of the default size 64 kb which is specified before hand.

**-What is the use of Timers is Node.js?**

The Timers module in Node.js contains functions that execute code after a set period of time. Timers do not need to be imported via require(), since all the methods are available globally to emulate the browser JavaScript API.

Node.js Timer provides setTimeout(), setImmediate() and setInterval.

**-What are the security mechanisms available in Node.js?**

Authentication — Authentication is one of the primary security stages at which user is identified as permitted to access the application at all. Authentication verifies the user’s identity through one or several checks.

Error Handling — Usually, the error message contains the explanation of what’s actually gone wrong for the user to understand the reason. At the same time, when the error is related to the application code syntax, it can be set to display the entire log content on the frontend.

Request Validation — Another aspect which has to be considered, while building a secure Node.js application, is a validation of requests or, in other words, a check of the incoming data for possible inconsistencies.

**-Where can we use node.js?**

Node.js can be used for the following purposes
a) Web applications ( especially real-time web apps )
b) Network applications
c) Distributed systems
d) General purpose applications

**-How node.js works?**

Node.js works on a v8 environment, it is a virtual machine that utilizes JavaScript as its scripting language and achieves high output via non-blocking I/O and single-threaded event loop.

**-Explain non-blocking I/O ?**

The term non-blocking is used in many different ways and contexts. In this post we were focusing on non-blocking I/O which refers to threads not waiting for I/O operations to finish. However sometimes people refer to APIs as non-blocking only because they do not block the current thread.

**-Explain blocking I/O ?**

When javascript execution in Node.js process (each program is a process) has to wait until a non-javascript operation completes is called blocking.

**-Explain Multi-Threaded Request-Response ?**

Client sends request to the server, then server do some processing based on clients request, prepare response and send it back to the client.

This model uses HTTP protocol. As HTTP is a Stateless Protocol, this Request/Response model is also Stateless Model. So we can call this as Request/Response Stateless Model.

Request/Response Model Processing Steps:

* Clients Send request to Web Server.
* Web Server internally maintains a Limited Thread pool to provide services to the Client Requests.
* Web Server is in infinite Loop and waiting for Client Incoming Requests
* Web Server receives those requests.
* Web Server pickup one Client Request
* Pickup one Thread from Thread pool
* Assign this Thread to Client Request
* This Thread will take care of reading Client request, processing Client request, performing any Blocking IO Operations (if required) and preparing Response
* This Thread sends prepared response back to the Web Server
* Web Server in-turn sends this response to the respective Client.

**-Explain Stateless Model ?**

A client program makes a request to an application server, which sends data back to the client. The server treats all client connections equally and saves no information from prior requests or sessions. A website that serves up a simple static web page is a good example of the stateless model.

**-Single Threaded Event Loop Model ?**

Single Threaded Event Loop Model Processing Steps:

* Clients Send request to Web Server.
* Node JS Web Server internally maintains a Limited Thread pool to provide services to the Client Requests.
* Node JS Web Server receives those requests and places them into a Queue. It is known as “Event Queue”.
* Node JS Web Server internally has a Component, known as “Event Loop”. Why it got this name is that it uses indefinite loop to receive requests and process them. (See some Java Pseudo code to understand this below).
* Event Loop uses Single Thread only. It is main heart of Node JS Platform Processing Model.
* Even Loop checks any Client Request is placed in Event Queue. If no, then wait for incoming requests for indefinitely.
* If yes, then pick up one Client Request from Event Queue
* Starts process that Client Request
* If that Client Request Does Not requires any Blocking IO Operations, then process everything, prepare response and send it back to client.
* If that Client Request requires some Blocking IO Operations like interacting with Database, File System, External Services then it will follow different approach
* Checks Threads availability from Internal Thread Pool
* Picks up one Thread and assign this Client Request to that thread.
* That Thread is responsible for taking that request, process it, perform Blocking IO operations, prepare response and send it back to the Event Loop
* Event Loop in turn, sends that Response to the respective Client.

**-What are the two types of API functions in Node.js?**

* Asynchronous, non-blocking functions
* Synchronous, blocking functions

**-What is the advantage of using node.js?**

* It provides an easy way to build scalable network programs
* Generally fast
* Great concurrency
* Asynchronous everything
* Almost never blocks

**-What is the difference between Node.js vs Ajax?**

The difference between Node.js and Ajax is that Ajax (short for Asynchronous Javascript and XML) is a client-side technology, often used for updating the contents of the page without refreshing it. While,Node.js is Server Side Javascript, used for developing server software. Node.js does not execute in the browser but by the server.

**-What are the pros and cons of Node.js?**

Pros:
a) If your application does not have any CPU intensive computation, you can build it in the JavaScript top to bottom, even down to the database level if you use JSON storage object DB like MongoDB.
b) Crawlers receive a full-rendered HTML response, which is far more SEO friendly rather than a single page application or a websockets app run on top of Node.js.

Cons:
a) Any intensive CPU computation will block node.js responsiveness, so a threaded platform is a better approach.
b) Using a relational database with Node.js is considered less favorable

**-What are the benefits of using Node.js?**

* Asynchronous and Event Driven - All APIs of Node.js library are asynchronous that is non-blocking. It essentially means a Node.js based server never waits for a API to return data. Server moves to next API after calling it and a notification mechanism of Events of Node.js helps server to get response from the previous API call.
* Very Fast - Being built on Google Chrome's V8 JavaScript Engine, Node.js library is very fast in code execution.
* Single Threaded but highly Scalable - Node.js uses a single threaded model with event looping. Event mechanism helps server to respond in a non-blocking ways and makes server highly scalable as opposed to traditional servers which create limited threads to handle requests. Node.js uses a single threaded program and same program can services much larger number of requests than traditional server like Apache HTTP Server.
* No Buffering - Node.js applications never buffer any data. These applications simply output the data in chunks.

**-What is libuv?**

libuv is a C library that is used to abstract non-blocking I/O operations to a consistent interface across all supported platforms. It provides mechanisms to handle file system, DNS, network, child processes, pipes, signal handling, polling and streaming. It also includes a thread pool for offloading work for some things that can't be done asynchronously at the operating system level.

* Full-featured event loop backed
* File system events
* Asynchronous file & file system operations
* Asynchronous TCP & UDP sockets
* Child processes

**-How does Node.js handle child threads?**

Node.js, in its essence, is a single thread process. It does not expose child threads and thread management methods to the developer. Technically, Node.js does spawn child threads for certain tasks such as asynchronous I/O, but these run behind the scenes and do not execute any application JavaScript code, nor block the main event loop.

If threading support is desired in a Node.js application, there are tools available to enable it, such as the ChildProcess module.

**-Rewrite promise-based Node.js applications to Async/Await ?**

```
function asyncTask() {
    return functionA()
        .then((valueA) => functionB(valueA))
        .then((valueB) => functionC(valueB))
        .then((valueC) => functionD(valueC))
        .catch((err) => logger.error(err))
}
```

```
async function asyncTask() {
    try {
        const valueA = await functionA()
        const valueB = await functionB(valueA)
        const valueC = await functionC(valueB)
        return await functionD(valueC)
    } catch (err) {
        logger.error(err)
    }
}
```

**-What's the Event Loop?**

![Image of Event Loop](https://i.stack.imgur.com/Lbs9z.png)

**-When should we use Node.js?**

Node.js is well suited for applications that have

a lot of concurrent connections and
each request only needs very few CPU cycles
because the event loop (with all the other clients) is blocked during execution of a function. Node.js is best suited for real-time applications:

* online games,
* collaboration tools,
* chat rooms,
* API's
<<<<<<< HEAD
* 
=======
*
>>>>>>> 9f9aa59adde5a19f5fb6781be5e40dfa14342661

or anything where what one user does with the application needs to be seen by other users immediately, without a page refresh.

**-How do you convert an existing callback API to promises?**

```
function divisionAPI (number, divider, successCallback, errorCallback) {
    if (divider == 0) {
        return errorCallback( new Error("Division by zero") )
    }
    successCallback( number / divider )
}
```

```
function divisionAPI(number, divider) {
    return new Promise(function(fulfilled, rejected) {
        if (divider == 0) {
            return rejected(new Error("Division by zero"))
        }
        fulfilled(number / divider)
    })
}

// Promise can be used with together async\await in ES7 to make the program flow wait for a fullfiled result
async function foo() {
    var result = await divisionAPI(1, 2); // awaits for a fulfilled result!
    console.log(result);
}

// Another usage with the same code by using .then() method
divisionAPI(1, 2).then(function(result) {
    console.log(result)
})
```

**-How would you handle errors for async code in Node.js?**

```
doWork()
 .then(doWork)
 .then(doOtherWork)
 .then((result) => doWork)
 .catch((error) => {throw error;})
 .then(verify);
```

```
async function check(req, res) {
    try {
        const a = await someOtherFunction();
        const b = await somethingElseFunction();
        res.send("result")
    } catch (error) {
        res.send(error.stack);
    }
}
```

**-List down the tasks which should be done asynchronously using the event loop?**

* Below is the list of the tasks which must be done asynchronously using the event loop:
* I/O operations
* Heavy computation
* Anything requiring blocking

**-List down the steps using which “Control Flow” controls the function calls in Node.js?**

* Control the order of execution
* Collect data
* Limit concurrency
* Call the next step in the program

**-What is an error-first callback in Node.js?**

Error-first callbacks in Node.js are used to pass errors and data. The very first parameter you need to pass to these functions has to be an error object while the other parameters represent the associated data. Thus you can pass the error object for checking if anything is wrong and handle it. In case there is no issue, you can just go ahead and with the subsequent arguments.

**-What do you understand by a test pyramid?**

A test pyramid basically is a diagram that describes the ratio of how many unit tests, integration tests, and end-to-end test are required to be written for the successful development of the project.

**-What do you understand by Reactor Pattern in Node.js?**

Reactor Pattern in Node.js is basically a concept of non-blocking I/O operations. This pattern provides a handler that is associated with each I/O operation and as soon as an I/O request is generated, it is then submitted to a demultiplexer. This demultiplexer is a notification interface which is capable of handling concurrency in non-blocking I/O mode. It also helps in collecting each and every request in the form of an event and then place each event in a queue. Thus resulting in the generation of the Event Queue. Simultaneously, we have our event loop which iterates the events present in the Event Queue.

**-What are LTS releases of Node.js?**

LTS stands Long Term Support version of Node.js that receives all the critical bug fixes along with security updates and performance improvements. These versions are supported for at least 18 months and mainly focus on stability and security. The modifications done to the LTS versions are restricted to the bug fixes, security upgrade, npm, and documentation updates, performance improvement, etc.

**-What do you understand by callback hell?**

Callback Hell is also known as the Pyramid of Doom. It is a pattern caused by intensively nested callbacks which are unreadable and unwieldy. It typically contains multiple nested callback functions which in turn make the code hard to read and debug. It is caused by improper implementation of the asynchronous logic.

```
async_A(function(){
async_B(function(){
async_C(function(){
async_D(function(){
....
});
});
});
});
```

**-Explain the concept of middleware in Node.js?**

Middleware is a function receives the Request and Response objects. In other words, in an application’s request-response cycle these functions have access to various request & response objects along with the next function of the cycle. The next function of middleware is represented with the help of a variable, usually named next. Most commonly performed tasks by the middleware functions are:

* Execute any type of code
* Update or modify the request and the response objects
* Finish the request-response cycle
* Invoke the next middleware in the stack

**-Explain the working of the control flow function.**

In Node.js, the control flow function is basically the code that is executed between the asynchronous function calls. Below are the steps that must be followed for executing it:

* Firstly, the order of execution must be controlled.
* Then, the required data need to be collected.
* Next, the concurrency must be limited.
* Once done, the next step of the program has to be invoked.

**-Explain the concept of stub in Node.js.**

In Node.js, stubs are basically the programs or functions that are used for stimulating the module or component behavior. During any test cases, stubs provide the canned answers of the functions.

**-How assert works in Node.js?**

In Node.js, assert is used to write tests. It only provides feedback only when any of the running test cases fails. This module gives you a set of assertion tests which are then used for testing invariants. It is basically used internally by Node.js but using require(‘assert’) code, it can be used in other applications as well.

**-Explain the purpose of ExpressJS package?**

Express.js is a framework built on top of Node.js that facilitates the management of the flow of data between server and routes in the server-side applications. It is a lightweight and flexible framework that provides a wide range of features required for the web as well as mobile application development. Express.js is developed on the middleware module of Node.js called. The connect module further makes use of an http module to communicate with Node.js. Thus, if you are working with any of the connect based middleware modules, then you can easily integrate with Express.js.

**-How does Node.js handle the child threads?**

Node.js is a single-threaded process and doesn’t expose the child threads or thread management methods. But you can still make use of the child threads using spawn() for some specific asynchronous I/O tasks which execute in the background and don’t usually execute any JS code or hinder with the main event loop in the application. If you still want to use the threading concept in your application you have to include a module called ChildProcess explicitly.

**-Explain stream in Node.js along with its various types ?**

Streams in Node.js are the collection of data similar to arrays and strings. They are objects using which you can read data from a source or write data to a destination in a continuous manner. It might not be available at once and need not to have fit in the memory. These streams are especially useful for reading and processing a large set of data. In Node.js, there are four fundamental types of streams:

* Readable: Used for reading large chunks of data from the source.
* Writeable: Use for writing large chunks of data to the destination.
* Duplex: Used for both the functions; read and write.
* Transform: It is a duplex stream that is used for modifying the data.

**-What is the use of NODE_ENV?**

If the project is in the production stage, Node.js promotes the convention of making use of NODE_ENV variable to flag it. This helps in taking better judgment during the development of the projects. Also, when you set your NODE_ENV to production, your application tends to perform 3 times faster.

**-List down the various timing features of Node.js.**

Node.js provides a Timers module which contains various functions for executing the code after a specified period of time. Below I have listed down the various functions provided by this module:

* setTimeout/clearTimeout — Used to schedule code execution after a designated amount of milliseconds
* setInterval/clearInterval — Used to execute a block of code multiple times
* setImmediate/clearImmediate — Used to execute code at the end of the current event loop cycle
* process.nextTick — Used to schedule a callback function that needs to be invoked in the next iteration of the Event Loop.

**-Explain the concept of Punycode in Node.js?**

Punycode is an encoding syntax that is used for converting Unicode (UTF-8) string of characters into a basic ASCII string of characters. It is important as the hostnames can only understand the ASCII characters.

**-Describe the exit codes of Node.js.**

Exit codes are a set of specific codes which are used for finishing a specific process. These processes can include the global object as well. Below are some of the exit codes used in Node.js:

* Uncaught fatal exception
* Unused
* Fatal Error
* Internal Exception handler Run-time failure
* Internal JavaScript Evaluation Failure

**-What do you understand by an Event Emitter in Node.js?**

EventEmitter is a Node.js class that includes all the objects that are capable of emitting events. These objects contain an eventEmitter.on() function through which more than one function can be attached to the named events that are emitted by the object. Whenever an EventEmitter object throws an event, all the attached functions to that specific event are invoked synchronously. Below code shows how to use the EventEmitter in your application:

**-How good is Node.JS with application scalability?**

Easy scalability is one of the key advantages that developers will receive while using Node.JS. Here, developers will find it extremely relevant to scale their applications in vertical as well as horizontal directions. With the inclusion of additional nodes to the existing system, applications here can be scaledin a horizontal manner. Node.JS also permits developers to add extra resources to single nodes while vertically scaling the application.

**-What is the benefit of Node.JS as a full-stack JavaScript?**

Node.JS can be used as a full-stack JavaScript to serve the purpose of both server-side and client-side application. Therefore, employers don’t have to hire separate developers for front-end and back-end development;This will save valuable time, money,and man power for businesses.

**-How does Node.JS work with caching?**

Node.JS’ sopen-source run time environment offers the feature of caching for single modules. Whenever the first module receives a request, it automatically gets cached in the application memory. We don’t have to re-execute the codes as caching will allow applications to load web pages faster and respond more optimally to the users.

**-How can Node.JS multiple requests simultaneously?**

Due to the availability of non-blocking I/O systems, Node.JS can handle multiple requests simultaneously with perfection. This system can handle the request of concurrent handling better compared other competitors, including Python and Ruby. Here incoming requests get properly lined up and executed fast and systematically.

**-What is a Node.JS eventsmodule?**

Event is a built-in Node.JS module, where developers can create, fire, and listen for their own events. It uses the require() method.

**-What is the use of module.exports in Node.js?**

In Node.JS, module. exportsis a special object that is included in every JavaScript file present in the Node.JS file default. Here module is a variable that represents the current module,and export is the object that will be exposed as the module.

**-What is worker processes?**

Worker processes are just those processes that are running in the background while you are doing something else. They can send emails, set variables and so on. They are extremely useful because they save a lot of time for web developers by completing these monotonous tasks.

**-What is a demultiplexer?**

The demultiplexer is a notification interface in the JS host. It is used to collect information about specific events and form quests, thereby providing the so-called Event Que.

**-How can you listen on port 80 with Node?**

You should not try to listen with Node on port 80 (in Unix-like systems) - to do so you would need superuser rights, but it is not a good idea to run your application with it.

Still, if you want to have your Node.js application listen on port 80, here is what you can do. Run the application on any port above 1024, then put a reverse proxy like nginx in front of it.

**-What does the runtime environment mean in Node.js?**

The runtime environment is literally just the environment your application is running in. This can be used to describe both the hardware and the software that is running your application. How much RAM, what version of node, what operating system, how much CPU cores, can all be referenced when talking about a runtime environment.

**-What are the data types in Node.js?**

* String
* Number
* Boolean
* Undefined
* Null
* RegExp
* Buffer: Node.js includes an additional data type called Buffer (not available in browser's JavaScript). Buffer is mainly used to store binary data, while reading from a file or receiving packets over the network.

**-How to create a simple server in Node.js that returns Hello World?**

* Step 01: Create a project directory

```
mkdir myapp
cd myapp
```

* Step 02: Initialize project and link it to npm

```
npm init
```

This creates a package.json file in your myapp folder. The file contains references for all npm packages you have downloaded to your project. The command will prompt you to enter a number of things. You can enter your way through all of them EXCEPT this one:

```
entry point: (index.js)
```

Rename this to:

```
app.js
```

* Step 03: Install Express in the myapp directory

```
npm install express --save
```

* Step 04: app.js

```
var express = require('express');
var app = express();
app.get('/', function (req, res) {
  res.send('Hello World!');
});

app.listen(3000, function () {
  console.log('Example app listening on port 3000!');
});
```

* Step 05: Run the app

```
node app.js
```

**-How do Node.js works?**

![Image of Event Loop](https://github.com/learning-zone/nodejs-interview-questions/blob/master/assets/event-loop.png)

Node is completely event-driven. Basically the server consists of one thread processing one event after another.

A new request coming in is one kind of event. The server starts processing it and when there is a blocking IO operation, it does not wait until it completes and instead registers a callback function. The server then immediately starts to process another event (maybe another request). When the IO operation is finished, that is another kind of event, and the server will process it (i.e. continue working on the request) by executing the callback as soon as it has time.

So the server never needs to create additional threads or switch between threads, which means it has very little overhead. If you want to make full use of multiple hardware cores, you just start multiple instances of node.js

Node JS Platform does not follow Request/Response Multi-Threaded Stateless Model. It follows Single Threaded with Event Loop Model. Node JS Processing model mainly based on Javascript Event based model with Javascript callback mechanism.

Single Threaded Event Loop Model Processing Steps:

Clients Send request to Web Server.
Node JS Web Server internally maintains a Limited Thread pool to provide services to the Client Requests.
Node JS Web Server receives those requests and places them into a Queue. It is known as “Event Queue”.
Node JS Web Server internally has a Component, known as “Event Loop”. Why it got this name is that it uses indefinite loop to receive requests and process them.
Event Loop uses Single Thread only. It is main heart of Node JS Platform Processing Model.
Even Loop checks any Client Request is placed in Event Queue. If no, then wait for incoming requests for indefinitely.
If yes, then pick up one Client Request from Event Queue
Starts process that Client Request
If that Client Request Does Not requires any Blocking IO Operations, then process everything, prepare response and send it back to client.
If that Client Request requires some Blocking IO Operations like interacting with Database, File System, External Services then it will follow different approach
Checks Threads availability from Internal Thread Pool
Picks up one Thread and assign this Client Request to that thread.
That Thread is responsible for taking that request, process it, perform Blocking IO operations, prepare response and send it back to the Event Loop
Event Loop in turn, sends that Response to the respective Client.

**-Explain RESTful Web Services in Node.js?**

REST stands for REpresentational State Transfer. REST is web standards based architecture and uses HTTP Protocol. It is an architectural style as well as an approach for communications purposes that is often used in various web services development. A REST Server simply provides access to resources and REST client accesses and modifies the resources using HTTP protocol.

HTTP methods

* GET − Provides read-only access to a resource.
* PUT − Creates a new resource.
* DELETE − Removes a resource.
* POST − Updates an existing resource or creates a new resource.
* PATCH− Update/modify a resource

Principles of REST

* Uniform Interface
* Stateless
* Cacheable
* Client-Server
* Layered System

**-How to build a microservices architecture with Node.js?**

Microservices are a style of service-oriented architecture (SOA) where the app is structured on an assembly of interconnected services. With microservices, the application architecture is built with lightweight protocols. The services are finely seeded in the architecture. Microservices disintegrate the app into smaller services and enable improved modularity.

![Image of Event Loop](https://github.com/learning-zone/nodejs-interview-questions/blob/master/assets/monolithic-and-microservices-architecture.jpg)

There are few things worth emphasizing about the superiority of microservices, and distributed systems generally, over monolithic architecture:

* Modularity — responsibility for specific operations is assigned to separate pieces of the application
* Uniformity — microservices interfaces (API endpoints) consist of a base URI identifying a data object and standard HTTP methods (GET, POST, PUT, PATCH and DELETE) used to manipulate the object
* Robustness — component failures cause only the absence or reduction of a specific unit of functionality
* Maintainability — system components can be modified and deployed independently
* Scalability — instances of a service can be added or removed to respond to changes in demand.
* Availability — new features can be added to the system while maintaining 100% availability.
* Testability — new solutions can be tested directly in the production environment by implementing them for restricted segments of users to see how they behave in real life.

**-How does routing work in Node.js?**

Routing defines the way in which the client requests are handled by the application endpoints. We define routing using methods of the Express app object that correspond to HTTP methods; for example, app.get() to handle GET requests and app.post to handle POST requests, app.all() to handle all HTTP methods and app.use() to specify middleware as the callback function.

CRUD Application

***-Explain the terms body-parser, cookie-parser, morgan, nodemon, pm2, serve-favicon, cors, dotenv, fs-extra, moment in Express JS?***

**a) body-parser**
`body-parser` extract the entire body portion of an incoming request stream and exposes it on `req.body`. This body-parser module parses the JSON, buffer, string and URL encoded data submitted using HTTP POST request.
*Example*:

```bash
npm install express ejs body-parser
```

```js
// server.js
var express = require('express')
var bodyParser = require('body-parser')
var app = express()
// create application/json parser
var jsonParser = bodyParser.json()
// create application/x-www-form-urlencoded parser
var urlencodedParser = bodyParser.urlencoded({ extended: false })
// POST /login gets urlencoded bodies
app.post('/login', urlencodedParser, function (req, res) {
  res.send('welcome, ' + req.body.username)
})
// POST /api/users gets JSON bodies
app.post('/api/users', jsonParser, function (req, res) {
  // create user in req.body
})
```

**b) cookie-parser**
A cookie is a piece of data that is sent to the client-side with a request and is stored on the client-side itself by the Web Browser the user is currently using.
The `cookie-parser` middleware\'s cookieParser function takes a `secret` string or array of strings as the first argument and an `options` object as the second argument.
**Installation**

```bash
npm install cookie-parser
```

*Example*:

```js
var express = require('express')
var cookieParser = require('cookie-parser')
var app = express()
app.use(cookieParser())
app.get('/', function (req, res) {
  // Cookies that have not been signed
  console.log('Cookies: ', req.cookies)
  // Cookies that have been signed
  console.log('Signed Cookies: ', req.signedCookies)
})
app.listen(3000)
```

**c) morgan**
HTTP request logger middleware for node.js.
**Installation**

```bash
npm install morgan
```

*Example*: write logs to a file

```js
var express = require('express')
var fs = require('fs')
var morgan = require('morgan')
var path = require('path')
var app = express()
// create a write stream (in append mode)
var accessLogStream = fs.createWriteStream(path.join(__dirname, 'access.log'), { flags: 'a' })
// setup the logger
app.use(morgan('combined', { stream: accessLogStream }))
app.get('/', function (req, res) {
  res.send('hello, world!')
})
```

**d) nodemon**
Nodemon is a utility that will monitor for any changes in source and automatically restart your server.
**Installation**

```bash
npm install -g nodemon
```

*Example*:

```js
{
  // ...
  "scripts": {
    "start": "nodemon server.js"
  },
  // ...
}
```

**e) pm2**
**P**(rocess) **M**(anager) **2** (pm2) is a production process manager for Node.js applications with a built-in load balancer. It allows to keep applications alive forever, to reload them without downtime and to faci
**Installation**

```bash
npm install pm2 -g
```

**Start an application**

```bash
pm2 start app.js
```

**[[Read More](https://pm2.keymetrics.io/docs/usage/quick-start/)]**
**f) serve-favicon**
Node.js middleware for serving a favicon. The `serve-favicon` module lets us exclude requests for the favicon in our logger middleware. It also caches the icon in memory to improve performance by reducing disk access.
**Installation**

```bash
npm install serve-favicon
```

*Example*:

```js
var express = require('express')
var favicon = require('serve-favicon')
var path = require('path')
var app = express()
app.use(favicon(path.join(__dirname, 'public', 'favicon.ico')))
// Add your routes here, etc.
app.listen(3000)
```

**g) cors**
**C**ross-**O**rigin **R**esource **S**haring (CORS) headers allow apps running in the browser to make requests to servers on different domains (also known as origins). CORS headers are set on the server side - the HT
**Installation**

```bash
npm install cors
```

**Example: Enable All CORS Requests**

```js
var express = require('express')
var cors = require('cors')
var app = express()
app.use(cors())
app.get('/products/:id', function (req, res, next) {
  res.json({msg: 'This is CORS-enabled for all origins!'})
})
app.listen(8080, function () {
  console.log('CORS-enabled web server listening on port 80')
})
```

**Example: Enable CORS for a Single Route**

```js
var express = require('express')
var cors = require('cors')
var app = express()
app.get('/products/:id', cors(), function (req, res, next) {
  res.json({msg: 'This is CORS-enabled for a Single Route'})
})
app.listen(8080, function () {
  console.log('CORS-enabled web server listening on port 80')
})
```

**h) dotenv**
When a NodeJs application runs, it injects a global variable called `process.env` which contains information about the state of environment in which the application is running. The `dotenv` loads environment variables
**Installation**

```bash
npm install dotenv
```

**Usage**

```js
// .env
DB_HOST=localhost
DB_USER=admin
DB_PASS=root
```

```js
// config.js
const db = require('db')
db.connect({
  host: process.env.DB_HOST,
  username: process.env.DB_USER,
  password: process.env.DB_PASS
})
```

**i) fs-extra**
`fs-extra` contains methods that aren\'t included in the vanilla Node.js fs package. Such as recursive `mkdir`, `copy`, and `remove`. It also uses graceful-fs to prevent `EMFILE` errors.
**Installation**

```bash
npm install fs-extra
```

**Usage**

```js
const fs = require('fs-extra')
// Async with callbacks:
fs.copy('/tmp/myfile', '/tmp/mynewfile', err => {
  if (err) return console.error(err)
  console.log('success!')
})
```

**j) moment**
A JavaScript date library for parsing, validating, manipulating, and formatting dates.
**Installation**

```bash
npm install moment --save
```

**Usage**

* Format Dates

```js
const moment = require('moment');
moment().format('MMMM Do YYYY, h:mm:ss a'); // October 24th 2020, 3:15:22 pm
moment().format('dddd');                    // Saturday
moment().format("MMM Do YY");               // Oct 24th 20
```

* Relative Time

```js
const moment = require('moment');
moment("20111031", "YYYYMMDD").fromNow(); // 9 years ago
moment("20120620", "YYYYMMDD").fromNow(); // 8 years ago
moment().startOf('day').fromNow();        // 15 hours ago
```

* Calendar Time

```js
const moment = require('moment');
moment().subtract(10, 'days').calendar(); // 10/14/2020
moment().subtract(6, 'days').calendar();  // Last Sunday at 3:18 PM
moment().subtract(3, 'days').calendar();  // Last Wednesday at 3:18 PM
```


const baz = () => console.log('baz')

const foo = () => {
  console.log('foo')
  setTimeout(bar, 0)
  new Promise((resolve, reject) =>
    resolve('should be right after baz, before bar')
  ).then(resolve => console.log(resolve))
  baz()
}

foo()
This prints

foo
baz
should be right after baz, before bar
bar
