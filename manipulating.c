#define _CRT_SECURE_NO_WARNINGS       //remove secure warinings 
#include "manipulating.h"             //include the header file
#define BUFFER_SIZE 80                // limit of the input buffer
#include <string.h>

void manipulating() {
/* Version 1 */
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];
    do
    {
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);    //this function read and write the user's input
        string1[strlen(string1) - 1] = '\0';   // this is the end of the string
        if ((strcmp(string1, "q")!= 0));
        {
            printf("Type the 2nd string:\n");
            fgets(string2, BUFFER_SIZE, stdin);    //this function read and write the user's input
            string2[strlen(string2) - 1] = '\0';   // this is the end of the string
            strcat(string1, string2);              //the string2 will be apended at the end of the string 1.
            printf("Concatenated string is \'%s\'\n", string1);
        }
    } while (strcmp(string1, "q")!= 0);      // the loop wont quit unless you put a q input.
    printf("*** End of Concatenating Strings Demo ***\n\n");

/* Version 2 */
    printf("*** Start of Comparing Strings Demo ***\n");
    char compare1[BUFFER_SIZE];   //create an array of char called compare1 with size of BUFFER_SIZE
    char compare2[BUFFER_SIZE];   //create an array of char called compare2 with size of BUFFER_SIZE
    int result;             //create an int called result 
    do
    {
        printf("Type the 1st string to compare (q - to quit):\n");
        fgets(compare1, BUFFER_SIZE, stdin);    //read user's input and store it into compare1
        compare1[strlen(compare1) - 1] = '\0';   //set the last character of the string to '\0' (Terminator), prevent buffer flow
        if ((strcmp(compare1, "q") != 0));     //compare the string with "q"
        {
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin);     //read user's input and store it into compare2
            compare2[strlen(compare2) - 1] = '\0';   //set the last character of the string to '\0' (Terminator), prevent buffer flow
            result = strcmp(compare1, compare2);     //compare the value of two string
            if (result < 0)                         //when the value is different and compare1 is less than compare2
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);  //print out the message
            else if(result == 0)                     //when the value is the same
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
            else                                     //when the value is different and compare1 is greater than compare2
                printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
            
        }
    } while (strcmp(compare1, "q") != 0);      // the loop wont quit unless you enter a q input.
    printf("*** End of Concatenating Strings Demo ***\n\n");
}