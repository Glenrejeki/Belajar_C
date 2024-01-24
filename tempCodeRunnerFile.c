#include <stdio.h>

    int main (){
        int i,j;
        // luar
        for ( i = 1; i <= 2; i++)
        {
            printf("Luar :%d\n",i);

            //dalam
            for ( j = 1; j <=3; ++j)
            {
                printf("Dalam : %d\n",j);
            }
        }

        return 0;
        
    }