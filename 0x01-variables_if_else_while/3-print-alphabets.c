#include <stdio.h>

int main()
{
    char ltr;

    printf("The CAPITAL UPPERCASE alphabet is: \n");
    for(ltr='A'; ltr='Z'; ltr++)
    {
        printf("%C\n", ltr);
    }

    return 0;
}
