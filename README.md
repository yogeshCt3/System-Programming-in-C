# [System-Programming](https://en.wikipedia.org/wiki/System_programming)-in-[C](https://en.wikipedia.org/wiki/C_(programming_language))
Implementations of few of the topics related to system programming  

![alt text](https://www.geeksforgeeks.org/wp-content/uploads/Clanguage-768x256.png) 


## License
MIT: see the [LICENSE](https://github.com/yogeshCt3/System-Programming-in-C/blob/master/LICENSE) file.


## Link for the topics   
   
### System Calls
Topic |Link 1|Link 2|Link 3|
------|------|------|------| 
System Calls|[PDF file](https://www.cs.cmu.edu/~guna/15-123S11/Lectures/Lecture24.pdf)|[GCC Documentation](https://www.gnu.org/software/libc/manual/html_node/System-Calls.html)|[IO system calls](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)
read( )|[Tutorial](http://www.tutorialspoint.com/unix_system_calls/read.htm)|[Linux manual](http://man7.org/linux/man-pages/man2/read.2.html)|[Example](http://codewiki.wikidot.com/c:system-calls:read)
write( )|[Example](http://codewiki.wikidot.com/c:system-calls:write)|[Code](https://stackoverflow.com/questions/46116764/how-to-use-the-write-system-call-in-c)|[Tutorial](http://www.tutorialspoint.com/unix_system_calls/write.htm)
open( )|[Implementation](https://0xax.gitbooks.io/linux-insides/SysCall/linux-syscall-5.html)|[Unix Forum](https://www.unix.com/programming/182339-open-system-call-c.html)|[Examples](http://codewiki.wikidot.com/c:system-calls:open)
lseek( )|[Overview](https://www.geeksforgeeks.org/lseek-in-c-to-read-the-alternate-nth-byte-and-write-it-in-another-file/)|[Manual](http://manpagesfr.free.fr/man/man2/lseek.2.html)|[Examples](http://codewiki.wikidot.com/c:system-calls:lseek)
opendir( )|[Example](http://www.qnx.com/developers/docs/6.5.0SP1.update/com.qnx.doc.neutrino_lib_ref/o/opendir.html)|[More Examples](https://stackoverflow.com/questions/3554120/open-directory-using-c)|[Manual](http://pubs.opengroup.org/onlinepubs/009604599/functions/opendir.html)
readdir( )|[Manual](http://man7.org/linux/man-pages/man3/readdir.3.html)|[Example](https://stackoverflow.com/questions/20265328/readdir-beginning-with-dots-instead-of-files/20265398)|[More Example](https://stackoverflow.com/questions/20265328/readdir-beginning-with-dots-instead-of-files/20265398)   
    
### Process and Threads

Topic|Link 1|Link 2|Link 3|
-----|------|------|------|
Process|[Theory](https://en.wikipedia.org/wiki/Process_(computing))|[Tutorial](https://www.tutorialspoint.com/operating_system/os_processes.htm)|[Flow Chart](https://www.studytonight.com/operating-system/operating-system-processes)
Zombie Process|[Theory](https://en.wikipedia.org/wiki/Zombie_process)|[Tutorial](https://www.tutorialspoint.com/what-is-zombie-process-in-linux)|
Orphan Process|[Theory](https://en.wikipedia.org/wiki/Orphan_process)|[Zombie vs Orphan](https://www.gmarik.info/blog/2012/orphan-vs-zombie-vs-daemon-processes/)|[Resolve](http://linuxg.net/what-are-zombie-and-orphan-processes-and-how-to-kill-them/)
Threads|


## List of programs



Index | Question | View Code|
------|----------|----------|
01|WAP in C to print any text on screen using system calls.|[Code](https://github.com/yogeshCt3/System-Programming-in-C/blob/master/01%20-%20Write%20on%20console.c)    
02|WAP in C to read upto End Of File using concepts of System Calls.|[Code](https://github.com/yogeshCt3/System-Programming-in-C/blob/master/02%20-%20Read%20upto%20EOF.c)
03|WAP in C to read all content of a text file using system calls concepts.|[Code](https://github.com/yogeshCt3/System-Programming-in-C/blob/master/03%20-%20Read%20all%20content%20of%20a%20file.c)
10|WAP in C to implement the "race around condition" using threads.|[Code](https://github.com/yogeshCt3/System-Programming-in-C/blob/master/10%20-%20Race%20Around%20Condition.c)  
11|WAP in C to resolove the "race around condition" of threads using method of "mutes locks".|[Code](https://github.com/yogeshCt3/System-Programming-in-C/blob/master/11%20-%20RAC%20reslove%20using%20mutex%20locks.c)
12|WAP in C to resolove the "race around condition" of threads using method of "semaphores".|[Code](https://github.com/yogeshCt3/System-Programming-in-C/blob/master/12%20-%20RAC%20resolve%20using%20the%20semaphores.c)
13|WAP in C to solve the Producer/ Consumer problem using threads and semaphores.|[Code](https://github.com/yogeshCt3/System-Programming-in-C/blob/master/13%20-%20%20Bounded%20Buffer.c)
14|WAP in C to create a scenario showing deadlocks using threds and semaphores|[Code](https://github.com/yogeshCt3/System-Programming-in-C/blob/master/14%20-%20DeadLock.c)
