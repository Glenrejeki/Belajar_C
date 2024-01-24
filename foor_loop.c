// 1. For loop

// #include <stdio.h>

//     int main (){
//         int i;
//         for ( i = 0; i < 5; i++)
//         {
//             printf ("%d\n",i);
//         }
//         return 0;
//     }

// 2. Nested Loops

// #include <stdio.h>

//     int main (){
//         int i,j;
//         // luar
//         for ( i = 1; i <= 2; i++)
//         {
//             printf("Luar :%d\n",i);

//             //dalam
//             for ( j = 1; j <=3; ++j)
//             {
//                 printf("Dalam : %d\n",j);
//             }
//         }

//         return 0;
        
//     }


// 3. BREAK & CONTINUE LOOP
// #include <stdio.h>

//     int main (){
//         int i=0;
//         while (i<10)
//         {
//             if (i==4)
//             {
//                 break;
//             }
//         printf("%d\n",i);
//         i++;
//         }  
//     }

#include <stdio.h>
    int main (){
        int i;
        for ( i = 0; i < 10; i++)
        {
            if (i==4)
            {
                continue;
            }
           printf("%d\n",i); 
        }
    return 0;
    }