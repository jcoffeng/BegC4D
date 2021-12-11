#include <stdio.h>
#include <ctype.h>
#define SET 32
#define SETUPPER 223

char *binbin(int n);
void toLowerCase();
void toUpperCase();

int main()
{
    int input;
    char inputCasing[64];
    int bor, result;

    printf("Typ in HOOFDLETTERS: ");
    fgets(inputCasing, 63, stdin);
    toUpperCase(inputCasing);


    printf("Typ een waarde van 0 tot en met 65535: ");
    scanf("%d", &input);
    printf("%d is binair %s\n",input,binbin(input));


    printf("Typ een waarde van 0 tot en met 65535: ");
    scanf("%d", &bor);
    result = bor | SET;

    printf("\t%s\t%d\n", binbin(bor), bor);
    printf("|\t%s\t%d\n", binbin(SET), SET);
    printf("=\t%s\t%d\n", binbin(result), result);
    return(0);
}

void toLowerCase(char input[])
{
    int ch;
    int x = 0;
    while(input[x] != '\n')
    {
        if(isalpha(input[x]))
        {
        ch=input[x] | SET;
        }
        else
        {
        ch=input[x];
        }
        putchar(ch);
        x++;
    }
    putchar('\n');
}

void toUpperCase(char input[])
{
    int ch;
    int x = 0;
    while(input[x] != '\n')
    {
        if(isalpha(input[x]))
        {
        ch=input[x] & SETUPPER;
        }
        else
        {
        ch=input[x];
        }
        putchar(ch);
        x++;
    }
    putchar('\n');
}

char *binbin(int n)
{
    static char bin[17];
    int x;

    for(x=0;x<16;x++)
    {
        bin[x]=n & 0x8000 ? '1' : '0';
        n<<=1;
    }
    bin[x]='\0';
    return(bin);
}
