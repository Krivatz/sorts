#include <stdio.h>
#include <stdlib.h>
 
int i, j,z,v;
  
 
int bubblesort(int z){
	
int	sayilar[z];

// rastgele sayıların oluşturulduğu bölüm	 
 for(i = 0; i<z ;i++){
        
		sayilar[i]=rand()%10000;
        
		printf("%d  ", sayilar[i]);
    }
    
//sıralama burada devreye giriyor
printf("\n bubble sort yontemi ile siralanisi: \n");
    for(i = 1; i< z; i++){
        
		for(j = 0; j< z-i; j++){
            
			if(sayilar[j]> sayilar[j+1]){
                
				int a;
                
				a= sayilar[j];
                
				sayilar[j]= sayilar[j+1];
                
				sayilar[j+1]= a;
            }
        }
    }

//bubble sort değişkenlerinin dize olarak atandığı yer
    for(i = 0; i<z; i++){

        printf("%d  ", sayilar[i]);
	}
}
int main(){
	printf("ne kadar sayinin siralanmasini istersiniz? Bir deger giriniz.");
	scanf("%i",&v);
    bubblesort(v);
    return 0;
}