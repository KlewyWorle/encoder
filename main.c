#include <stdio.h>
#include <stdlib.h>
//#include "coder/test.c"
#include "coder/encoder.c"
#include "coder/decrypter.c"
#include<unistd.h>

int main()
{
    
    
    
    char *b = encode("wtff");
    char *r = decrypt(b);
    //printf("fucl");
   
    printf("final %s and size %d \n", r , strlen(r));
    free(b);
    free(r);

    char *a = encode("putin");
    char *c = decrypt(a);

    printf("final %s and strlen is %d\n", c, strlen(c));
    return 0;
}
