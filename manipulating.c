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


}