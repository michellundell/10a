# michellundell/10a C++

## Creating software, "brainstorm"

1. Where do you begin?

   Define the task the software should accomplish.
```
You should create a program that takes two arguments.
The first argument is a file with flight information.
The second argument is a file with booking information.
Your program should create files with a ticket for each booking.
```
   Gather all information you can get.

   While looking at the information, would you solve the task?

   If you, with the available information, can solve the task ...
   describe in pseudo code the steps you do to solve the task.

   If you, with the available information, can NOT solve the task ...
   then it will be very hard to design a piece of software that does.
   Is there information you need?
   Is the task not defined enough?

2. Then what?

   Now you can solve the task the software is supposed to perform,
   at least you think you could ;-)

   Look at the pseudo code you created in step 1, can you identify any objects?
   Some objects are obvious, they represent data. By looking at the information you
   got in step 1, you could start creating those objects that represent data.

  Do you need any other objects that manages the objects you found?
  Are there any processes you could identify? Could they be objects that perform these processes?

  By now you should have an idea of some of the objects your system could have ..
  
 
3. Start sketching your classes

  If they hold data, the attributes of the class is given. Then "setters" and "getters" for the attributes are obvious.
  
  If a class is a process, create methods that you could use to control the process and its results.
  Maybe the result of a process is an object? ...
  
4. Create a program that use the classes you sketched.

   Just as a small proof of concept (POC), implement the classes you sketched with "hardcoded" data to see if the
   program/classes might solve the task it is supposed to do.


