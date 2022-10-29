#include <stdio.h>
int z ;
int v = 0;
int kalan(int z){
	
	for(int i = 1;i<=z;i++){
	
		if(i%3==0)
		{
			
		printf("\n 3'e bolunuyor: %i");
			
			v=v+i;
		}
		else if(i%5==0)
		{
			
			printf("\n 5'e bolunuyor: %i");
			
			v=v+i;
		}
	}
	return v;
}
int main() {
	
	printf("0 Ile kac araligini arasin, gecerli bi deger giriniz ");
	scanf("%d",&z);
	kalan(z);
	printf("\n toplamlari sonucu %d",v);
}
