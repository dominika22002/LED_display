#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

char choices[5][20] = {"1. Info", "2. Liczby", "3. Stoper", "4. Zegar", "5. Miernik"};
char buff_1[20];
char buff_2[20];

int main()
{
    printf("%s\n",choices[1]);
    sprintf(buff_1,"%s\n",choices[0]);
    printf("%s",buff_1);
    return 0;
}
