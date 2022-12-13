#define _CRT_SECURE_NO_WARNINGS      //remove secure warinings 
#include "tokenizing.h"              //include the header file
#define BUFFER_SIZE 300              // limit of the input buffer
#include <string.h>
void tokenizing() {
	printf("*** Start of Tokenizing Words Demo ***\n");
	char words[BUFFER_SIZE];
	char* nextWord = NULL;
	int wordsCounter;
	do
	{
		printf("Type a few words separated by space (q- to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);     //this function read and write the user's input
		words[strlen(words) - 1] = '\0';      // this is the end of the string
		if (strcmp(words, "q") != 0)
		{
			nextWord = strtok(words, " ");    // next word is keep going until the empty character.
			wordsCounter = 1;                 // this count as one word.
			while (nextWord)                  // if nextword >0 it will goes on.
			{
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " ");  // stop when the empty character appears.
			}
		}
	} while (strcmp(words, "q") != 0);         // the loop wont quit unless you put a q input
	printf("*** End of Tokenizing Words Demo ***\n\n");


/* Version 2 */

}