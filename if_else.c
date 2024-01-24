// 1. IF
// #include <stdio.h>

//     int main (){
//         if (20>18){
//             printf("20 adalah lebih besar dari pada 18");
//         }
//     return 0;
//     }

// #include <stdio.h>

//     int main (){
//         int x=20;
//         int y = 18;

//         if (x>y)
//         {
//         printf("X lebih besar dari pada y");    /* code */
//         }
        
//     }


// 2. ELSE

// #include <stdio.h>

//     int main (){
//         int time = 20;

//         if (time>18)
//         {
//             printf("Good day ");// pernyataan benar
//         } else {
//             printf("Good Evening");// pernyataan salah
//         }

//         return 0;
        
//     }


// 3. ELSE IF

// #include <stdio.h>

//     int main (){
//         int time =22;
//         if (time<10)
//         {
//             printf("Selamat pagi");// pernyataan 1 benar 
//         } else if (time<20){
//             printf("Selamat siang");//pernyataan 2 benar 
//         } else{
//             printf("Selamat sore");// pernyataan 2 salah
//         }
        
//     }
// #include <stdio.h>

//     int main (){
//         int time =22;
//         if (time>10)
//         {
//             printf("Selamat pagi");
//         } else if (time<20){
//             printf("Selamat siang");
//         } else{
//             printf("Selamat sore");
//         }
        
//     }
// #include <stdio.h>

//     int main (){
//         int time =22;
//         if (time<10)
//         {
//             printf("Selamat pagi");
//         } else if (time>20){
//             printf("Selamat siang");
//         } else{
//             printf("Selamat sore");
//         }
// #include <stdio.h>

//     int main (){
//         int time =22;
//         if (time>10) // condintion 1 vs condition 2 yang menang condition 1
//         {
//             printf("Selamat pagi");
//         } else if (time>20){
//             printf("Selamat siang");
//         } else{
//             printf("Selamat sore");
//         }
        
//     }


// 3. SHORT HAND IF

// #include <stdio.h>

//     int main (){
//         int time = 20 ;
//         if (time<18) {
//             printf("Selamat siang");
//         } else {
//             printf("Selamat sore");
//         }
//     return 0;
//     }

#include <stdio.h>

    int main (){
        int time =20;
        (time <18 ) ? printf("Selamat siang"):printf("Selamat sore");
        return   0;
    }