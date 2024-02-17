#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* getSym(char a)
{
    
    char *result;
    int res = ((int)a) * 3;
    size_t sizei = snprintf(result, 0, "%d", res) + 1;
    
    result = malloc(sizeof(char) * sizei + 1);
    
    snprintf(result, sizei, "%d", res);
    result[sizei - 1] = '.';
    //printf("%s \n", result);
    return result;
}


char* encode(const char* word)
{
    char* result = malloc(sizeof(char) * 0);

    for(int i = 0; i < strlen(word); i++)
    {
        result = realloc(result, sizeof(char) * (strlen(result) + strlen(getSym(word[i]))) + 1);

        size_t a = snprintf(result, 0, "%s", getSym(word[i])) + 1;
        snprintf(result + strlen(result), a, "%s", getSym(word[i]));
    
    }
    result = realloc(result, sizeof(char) * (strlen(result))); // -1
    result[strlen(result) - 1] = '\0';
    return result;
}
