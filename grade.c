#include <stdio.h>

int main()
{
    float nilai = 75;
    if (nilai >= 79.5 && nilai <= 100)
    {
        printf("A");    
    }
    else if (nilai > 72.5 && nilai < 79.5)
    {
        printf("AB");
    }
    else if (nilai > 64.5 && nilai < 72.5)
    {
        printf("B");
    }
    else if (nilai >= 57 && nilai)
    {
        printf("BC");
    }
    else if (nilai >= 49.5 && nilai < 57)
    {
        printf("C");
    }
    else if (nilai >= 34 && nilai < 49.5)
    {
        printf("D");
    }
    else if (nilai >= 0 && nilai < 34)
    {
        printf("E");
    }
}