#include <stdio.h>
#include <stdlib.h>

 void fibonacci(int n)
 {
     int ilk=0;
     int ikinci=1;
     int sonraki;
     int i;

     printf("Uretilecek fibonacci sayilari:\n");
     for(i=0;i<n;i++)
     {
        if(i<=1)
        {
            sonraki=i;
        }
        else{
            sonraki=ilk+ikinci;
            ilk=ikinci;
            ikinci=sonraki;
        }
        printf("%d\n",sonraki);
     }
 }


int main()
{
   /*Her sayinin kendinden onceki sayi ile toplanmasi sonucu olusan sayi
   dizisine Fibonacci dizisi adi verilmektedir.Buna gore klavyeden kac adet
   fibonacci sayisi uretilecegi bilgisi girilerek sayilarin uretilmesini sag-
   layan C programini fonksiyon kullanarak yaziniz. */
   int sayi;
   printf("Kac adet fibonacci sayisi uretilecektir ?\n");
   scanf("%d",&sayi);
   fibonacci(sayi);



}
