#include <stdio.h>
#include <stdlib.h>
#include "coder/encoder.c"
#include "coder/decrypter.c"
#include<unistd.h>

int main()
{
    
    char *b = encode("are_you_tolerant?hru");
    char *r = decrypt(b);
        
    printf("final %s and size %d \n", r , strlen(r));
    
    return 0;
}
