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

}
