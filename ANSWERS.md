**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
Start - The initlal state of the process being initiated.

Ready - The process is waiting to be assigned to a processor.  Ready processes are waiting to have the processor allocated to them by the operating system so that they can run.

Running - Process state is set to running and the processor excecutes its instructions

Waiting - Process moves into the waiting state if it needs to wait for a resource or waiting for a file to become avaliable.  An example of this will be a process waiting for a user input.

Terminated or Exit - When the process is finished with its execution it is moved to terminated state where it waits to be removed from memory.  



**2. What is a zombie process?**
A zombie process is a process that has completed execution but still has an entry in the process table and sit in terminated state until reaped.  

**3. How does a zombie process get created? How does one get destroyed?**
This gets created when a process enters a terminated state and is not yet removed from memory or the resource table.  

Zombie processes can be reaped by the wait system call, but will not be effected by the kill command.  ...Hence Zombie

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
There are more 1:1 relationships and communications between the code and the hardware operation that's being performed by machine code which lets you fine tune CPU performance and memory.  