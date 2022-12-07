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
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[BUFFER_SIZE];   //create an array of char called phrases with size of BUFFER_SIZE
	char* nextPhrase = NULL;  //create a char pointer called nextPhrase
	int phrasesCounter;   //create an int call phrasesCounter
	do {
		printf("Type a few phrases separated by comma (q- to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);   //read user's input and store it into phrases
		phrases[strlen(phrases) - 1] = '\0';  //set the last character of the string to '\0' (Terminator), prevent buffer flow
		if (strcmp(phrases, "q") != 0) {
			nextPhrase = strtok(phrases, ",");    //Split string into tokens, separated by ","
			phrasesCounter = 1;
			while (nextPhrase) {                      //if that is not the end of the string, it will keep looping
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);  //print out the output and add 1 to phrasesCounter so that it points to next character
				nextPhrase = strtok(NULL, ",");   
			}
			
		}
	} while (strcmp(phrases, "q") != 0);   //compare the string with "q"
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
	

}