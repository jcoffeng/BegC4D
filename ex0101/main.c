#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    b=16;
    printf("Vooraf: a is niet toegekend aan b=%d\n", b);
    a=b++;
    printf("Achteraf: a=%d en b=%d\n", a,b);
    printf("Hello world!\n");
    return 0;
}
