#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* decrypt(const char* word)
{
    
    char *result = malloc(sizeof(char) * 1);

    char *arr = malloc(sizeof(char) * (strlen(word) + 1));
    strcpy(arr, word);
    // Returns first token
    char* token = strtok(arr, ".");
    int index = 0;
    while (token != NULL) {
        
        result = realloc(result, sizeof(char) * (strlen(result) + 1));
        result[index] = (char)(atoi(token) / 3);
        token = strtok(NULL, ".");
        index++;
    }
    

    return result;

}