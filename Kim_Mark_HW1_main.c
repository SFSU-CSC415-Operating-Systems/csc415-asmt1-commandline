/**************************************************************
* Class:  CSC-415-02 Fall 2022
* Name: Mark Kim
* Student ID: 918204214
* GitHub Name: mkim797
* Project: Assignment 1 – Command Line Arguments
*
* File: Kim_Mark_HW1_main.c 
*
* Description: This project program first displays the number of
* arguments provided to this executable. In subsequent
* lines it will list the argument number with the contents of the
* argument alongside it.  All output is sent to the console.
*
**************************************************************/
#include <stdio.h>
int main ( int argc, char *argv[] ) {
	// Print number of arguments (stored in argc)
	printf("\nThere were %d arguments on the command line.\n", argc);
	// Loop through *argv array (index 0 is the name of the executable,
	// and subsequent indices are the arguments provided)
	for (int i=0; i < argc; i++) {
		printf("Argument %02d:\t%s\n", i, argv[i]);
	}
}
