// #include <stdio.h>

//     int main (){
//         int day =4 ;

//         switch (day)
//         {
//         case 1:
//             printf("Monday");
//             break;
//         case 2:
//             printf("Tuesday");
//             break;
//         case 3:
//             printf("Wednesday");
//             break;
//         case 4:
//             printf("Thursday");
//             break;
//         case 5:
//             printf("Friday");
//             break;
//         case 6:
//             printf("Saturday");
//             break;
//         case 7:
//             printf("Sunday");
//             break;
//         }
//     return 0;
//     }

#include <stdio.h>

    int main (){
        int day = 4;

        switch (day)
        {
        case 6:
            printf("Today is  saturday");
            break;
        case 7:
            printf("Today is sunday");
            break;
        default:
            printf("Looking forward to the weeknd");
            break;
        }
    return 0;
    }