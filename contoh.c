// #include <stdio.h>
// // mencari total harga dari banyak barang dan harga per item
// int main (){
//     // variabel dan diketahui
//     int items = 50;
//     float harga_per_item = 9.99;
//     float total_harga= items*harga_per_item;
//     char mata_uang = '$';
//     // output
//     printf("Nomor barang : %d\n",items);
//     printf("Harga per item  %.2f %c \n",harga_per_item,mata_uang );
//     printf("Total harga =  %.2f %c", total_harga , mata_uang);
// }

// #include <stdio.h>

// int main (){
//     int maxScore = 500;
//     int userScore = 250;
//     float persentase = (float)userScore/maxScore*100.0;
//     printf("persentasi score user adalah %.2f",persentase);
// }

// #include <stdio.h>
//     int main (){
//         int usiaKu =18;
//     int usiaVoting =17;
//     printf("%d", usiaKu>= usiaVoting);// hasilnya 1 (benar) karena umur 18 tahun bisa memilih pemimpin
//     return 0;
//     }

// #include <stdio.h>

//     int main (){
//         int usiaKu = 18;
//         int usiaVoting= 17;

//         if (usiaKu>=usiaVoting)
//         {printf("Usia yang cukup untuk memilih!!!");
//             /* code */
//         } else{
//             printf("Usia yang belum cukup umur untuk memilih !!!");
//         }

//         return 0;

//     }

// #include <stdio.h>

//     int main (){
//         int doorCode=1337;
//         if (doorCode==1337){
//             printf("Correct code.\n The door is now open");
//         }else {
//             printf ("Wrong Code.\n The doo is remained closed");
//         }
//     }

// #include <stdio.h>

// int main (){
//     int myNum = 10;
//     if (myNum>0){
//         printf("The value is a positive number.");
//     }else if (myNum<0){
//         printf("The value is a negative number.");
//     } else  {
//     printf("The value is 0.");
//     }
// }

// #include <stdio.h>

//     int main() {
//         int myNum=5;
//         if (myNum%2 ==0){
//             printf("%d is even",myNum);
//         } else {
//             printf("%d is odd\n",myNum);
//         }
//     }

// #include <stdio.h>

//     int main (){
//         int hitungmundur = 5;
//         while (hitungmundur>0)
//         {
//             printf("%d\n",hitungmundur);
//             hitungmundur--;
//         }
//     printf("Selamat ");
//     }

// #include <stdio.h>

// int main()
// {
//     int dadu = 1;
//     while (dadu <= 6)
//     {
//         if ("dadu<=6")
//         {
//             printf("No Yatzy\n");
//         }
//         else
//         {
//             printf("Yatzy!!!");
//         }

//         dadu = dadu + 1;
//     }
//     return 0;
// }

// #include <stdio.h>

//     int main (){
//         float i;
//         for ( i = 0; i <=100; i+=5.3)
//         {
//             printf("%.2f\n",i);
//         }
//      return 0;   
//     }

#include <stdio.h>

    int main (){
        int angka = 2;
        int i;
        for ( i = 1; i <=10; i++)
        {
            printf("%dx%d=%d\n",angka,i,angka*1);
        }
        
    }