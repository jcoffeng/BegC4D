#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int x;
    int *pn;

    pn=numbers;

    // Array vullen
    for(x=0;x<10;x++)
    {
//        *pn=x+1;
//        pn++;
        *pn++=x+1;
    }

    pn=numbers;
    // Array weergeven
    for(x=0;x<10;x++)
    {
        // alternatively you can use numbers[x] instead of pointer
        printf("numbers[%d] = %d, address %p\n", x+1, *pn, pn);
        pn++;
    }

    char alphabet[27];
    char *pa;

    pa=alphabet;

    for(x=0;x<27;x++)
    {
//        *pa=x+'A';
//        pa++;
//
        *pa++=x+'A';
    }

    pa=alphabet;

     for(x=0;x<10;x++)
    {
        // alternatively you can use numbers[x] instead of pointer
        printf("alphabet[%d] = %p, address %p\n", x+1, *pa, pa);
        pa++;
    }
    printf("Hello pointers!\n");
    return(0);
}
