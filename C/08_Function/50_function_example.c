#include <stdio.h>


void greet(char name[]); 

int main()
{
    greet("민수");
    return 0;
}

void greet(char name[])
{
    printf("Hello %s", name);
}