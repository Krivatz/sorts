#include <stdio.h>

int KareleriToplami,ToplaminKaresi,a;
int toplam(int i){
		
		for(i=1; i<=a; i++) {

    	KareleriToplami=KareleriToplami +i*i;
    	
		ToplaminKaresi=ToplaminKaresi +i;
    }
return KareleriToplami,ToplaminKaresi;
}
int main()
{ 	printf("ilk kac sayinin kareleri toplami ile toplam karesinin farkinin hesaplanmasini istersiniz, bir deger giriniz. ");
	scanf("%i",&a);
    toplam(a);
	printf("\n Ilk %i sayinin kareleri toplami ile toplam karesinin farki: %d",a,KareleriToplami-ToplaminKaresi);
}
