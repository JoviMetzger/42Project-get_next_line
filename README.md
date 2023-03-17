# 📝 get_next_line

This repository contains an implementation of the "get_next_line" function, which reads a line from a file descriptor and returns it as a string. The function can read from a file or from the standard input, and it is designed to work efficiently even when reading large files.

## About

The get_next_line function reads from a file descriptor and returns the next line in the file. The function is designed to be called repeatedly, so that it reads one line at a time until the end of the file is reached. The function is implemented in C and uses the standard library functions read and malloc. The function must work as expected both when reading a file and when reading from the standard input. 
BUFFER_SIZE is defined in the headerfile, set by default to 42.
***Note:** this Project does not contain a Makefile.*

## Installation

To use the function, follow the steps below:

1. Create a test.txt file with input:
```bash
$ vim test.txt
```
2. You can create your own main() or use my main() which I have included/commented out in the get_next_line.c file.
3. Finally, replace '<size>' with the buffer size you want to use. Compile using the following command:
```bash
$ gcc -Wall -Werror -Wextra -D BUFFER_SIZE=<size> get_next_line.c get_next_line_utils.c
```

## Subject

You can find the subject for this project [here](https://cdn.intra.42.fr/pdf/pdf/73991/en.subject.pdf).
