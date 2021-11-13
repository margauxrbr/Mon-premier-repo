#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 20; i++)
    {
        printf("Valeur de i : %d\n", i);
    }
    
    int count = 0;
    while(count < 20)
    {
        printf("Valeur de count : %d\n", count);
        count++;
    }
}
