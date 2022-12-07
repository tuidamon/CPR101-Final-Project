#define _CRT_SECURE_NO_WARNINGS  //remove secure warinings 
#include "fundamentals.h" // include the fundamentals.h file 
#define BUFFER_SIZE 80 
#define NUM_INPUT_SIZE 10


void fundamentals(void) 
{
/* Version 1 */
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;
    do 
    {
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);         //this function read and write the user's input
        buffer1[strlen(buffer1) - 1] = '\0';   // this is the end of the string
        if (strcmp(buffer1, "q") != 0)
        {
            printf("Type the character postion within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);       //this function read and write the user's input
            numInput[strlen(numInput) - 1] = '\0';        // this is the end of the string
            position = atoi(numInput);   // this indicates the position of the certain character.
            if (position >= strlen(buffer1))
            {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");        // if the string put is too big, it will give the hint.
            }
            printf("The character found at %d position is \'%c\'\n",
                (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q")!= 0);      // the loop wont quit unless you put a q input.
    printf("*** End of Indexing Strings Demo ***\n\n");
}