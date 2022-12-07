#define _CRT_SECURE_NO_WARNINGS //remove secure warinings 
#include "converting.h" // include the converting.h file 
#define BUFFER_SIZE 80 // stores the data before proceesing
void converting() { // does not return value
/* Version 1 */
	printf("*** Start of Converting Strings to int Demo ***\n"); //print what is  between the brackets 
	char intString[BUFFER_SIZE]; 
	int intNumber;
	do
	{
		printf("Type an int numeric string (q - to quit):\n"); //define the value if it is not q,record it 
		fgets(intString, BUFFER_SIZE, stdin);
		intString[strlen(intString) - 1] = '\0';
		if (strcmp(intString, "q") != 0)
		{
			intNumber = atoi(intString); //converts a string into an integer number
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0); // compare the string with q if the string is equal to q stop loopinf 
	printf("*** End of Converting Strings to int Demo ***\n\n");


/* Version 2 */
	printf("*** Start of Converting Strings to double Demo ***\n");  //print out the start of the Demo
	char doubleString[BUFFER_SIZE]; //create an array of char called doubleString with size of BUFFER_SIZE
	double doubleNumber;  //create a double called doubleNumber
	do
	{
		printf("Type the doduble numeric string (q - to quit):\n"); //define the value if it is not q,record it 
		fgets(doubleString, BUFFER_SIZE, stdin);  //read user's input and store it into doubleString
		doubleString[strlen(doubleString) - 1] = '\0'; //set the last character of the string to '\0' (Terminator), prevent buffer flow
		if (strcmp(doubleString, "q") != 0)  // if the string is not empty
		{
			doubleNumber = atof(doubleString); //converts a string into an integer number
			printf("Converted number is %f\n", doubleNumber); //print out the output
		}
	} while (strcmp(doubleString, "q") != 0); // compare the string with q if the string is equal to q stop loopinf 
	printf("*** End of Converting Strings to double Demo ***\n\n"); //print out the end of the Demo

}
