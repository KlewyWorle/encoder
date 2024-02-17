#include <stdio.h>
#include <stdlib.h>
//#include "coder/test.c"
#include "coder/encoder.c"
#include "coder/decrypter.c"
#include<unistd.h>

int main()
{
    
    //char* ass = encode("bba");
       
    //printf("Wtf %s \n", ass);
    //printf("%d", strlen(ass));
    
    char *b = encode("are_you_tolerant");
    char *r = decrypt(b);
        
    printf("final %s and size %d \n", r , strlen(r));
    
    return 0;
}
