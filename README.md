# Linux-Shell
Shell is a UNIX term for the interactive user interface with an operating system. The shell is the layer of programming that understands and executes the commands a user enters. The shell is also called a command line interpreter. Users direct the operation of the computer by entering commands as text for a command line interpreter to execute, or by creating text scripts of one or more such commands. This project is divided into three phases as explained below.

Phase 1

The most generic sense of the term shell means any program that users employ to type commands. A shell hides the details of the underlying operating system and manages the technical details of the operating system kernel interface, which is the lowest-level, or "inner-most" component of most operating systems. A shell does three main things:
• Start up: After the system boots, the shell process starts up by reading and executing its configuration files.
• Scan: The shell scans the commands from standard input which could be direct input or in the form of a script and executes them.
• Stop: After execution, the shell performs some clean-up procedure, and terminates.

Phase 2
In Phase 2, we would like to add more functionality to the basic shell. Here is a list of functions which your shell should perform:
1. Piping and I/O redirection: The strategy for your shell is to have the parent process do all the piping and redirection before forking the processes. In this way the children will inherit the redirection. The parent needs to save input/output and restore it at the end.
2. History feature: You are supposed to implement history feature in your shell which is able to give last 25 commands used with there PID’s. Here are the other features for the history command:
• List last 25 commands used with date and timestamp
• Search specific commands in history using grep
3. Editor: Implement a customized editor in which you can write your code and execute using the shell.
4. Aliasing: An alias is a (usually short) name that the shell translates into another (usually longer) name or command. Aliases allow you to define new commands by substituting a string for the first token of a simple command. They are typically placed in the ~/.bashrc (bash) or ~/.tcshrc (tcsh) startup files so that they are available to interactive subshells. Under bash the syntax of the alias builtin is
alias [name[=value]]

Phase 3
Apart from the above features, I would like you to implement 2 custom functions.
1. deepsearch <string> (ds <string>) - Searches for a keyword in the files in the directory.
2. ps -cpu - Lists the top 10 CPU consuming processes.
3. ps -memry - Lists the top 10 Memory consuming processes.
4. ps -z - Lists all the zombie processes.
5. ls -z - Lists the files with size 0.
6. countfiles - Count the number of different types of file in the folder.
