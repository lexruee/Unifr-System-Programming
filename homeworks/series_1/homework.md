#Series 1
***
Imperative and System Programming, AS 2013, Alexander Rüedlinger

##Exercise 3: Word count

###Example 1:
```
% ./wcount
```

This command executes the wcount program. It uses the function getchar() from the stdio.h library to read the next character from the standard input (stdin).  
   
Because we haven't specified a input redirection (<) the program reads directly the input from the terminal. 
Entering a phrase like hello world and terminating the program with Ctrl-D results in:

```
1 2 12
```

###Example 2:
```
./wcount < wcount.c
```

In this example a input redirection is used to feed the programm wcount with data.  
It reads the entire file wcount.c and computes mectris such as:
	- number of line feeds,
	- bytes 
	- and words.

###Example 3:
```
./wcount < wcount > test
```

Here are two input/ouput operators applied in conjucntion with ./wcount.  
The operator < reads the binary file wcount, well it reads itself ;-).  
After that it computes the mectrics (bytes, words, line feeds). 
The produced output is redirected using the output redirection > operator to the file test. 

###Example 4:
```
cat wcount.c | ./wcount
```

This example shows the cat command and the pipe | operator.  
In a first stepp the command cat concatenates the sourcode file wcount.c and prints its contents on the standard output (stdout).  
Because the pipe operator follows the cat command its output is redirected to the program wcount.
As a final step wcount computes the metrics and prints them on the stdout.

###Example 5:
```
grep { wcount.c
```

grep stands for global regular expression. This program searches the input files for lines containing a match to the given pattern.  
  
In this example grep searches for mutliple occurrences of the left curly brace in the source code file wcount.c.  
grep prints only the matched lines of wcount.c where left curly braces are present.

###Example 6:
```
grep { wcount.c | ./wco
```

As mentioned before grep uses the search pattern {.  
It prints the matched lines on stdout. Because the pipe operator is applied the output is redirected. 
So the produced output from the program grep is redirected to wcount. Finally wcount computes the mectris of wcount.c and prints them on stdout.


##Exercise 4: wc Unix Utility
```
wc [options] [file ...]
```

###Options
With the possibility to specify options like -c, -m or -l we're able to customize the output of the program wc. 
So if we're only interesed in the number of characters we can use the -c option.
wcount has not this flexibilty such that the ouput is fixed.

###File option
wcount does not support to read a given file. In the examples above we're forced to use the input operator < in order to read a file.


