#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  a, b, c, position, swap;


selectionsort(int c){
	
		int sayilar[c];
	
		for(a= 0; a<c ;a++){
       
		sayilar[a]=rand()%10000;
        
		printf("%d  ", sayilar[a]);
	
}
 
  
 //selection sort algoritmasi
   for (a=0 ; a< (c - 1); a++){
      position = a;
 
      for ( b= a+1 ; b< c; b++){
         
	   		if (sayilar[position] > sayilar[b])
            	position = b;
        }
      		if (position != a){
      	
         		swap = sayilar[a];
         
         		sayilar[a] = sayilar[position];
         
         		sayilar[position] = swap;
        }
    }
 
   printf("\n Buyukten kucuge siralanisi \n");
 //sıralama 
  for (a = 0 ; a < c ; a++){
      printf("%d    ", sayilar[a]);
    }
  return 0;
}

int main(){
	printf("0 ile 10000 arasinde rasgele oluşturulup siralanacak sayi miktarini giriniz: ");
	scanf("%i",&c);
	selectionsort(c);
	   
   return 0;
}