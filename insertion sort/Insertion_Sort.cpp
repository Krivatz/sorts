#include <stdio.h>
#include <stdlib.h>

insertionSort(int dizi[], int n){	
int i, key, j;
//kullanıcı tarafından verilen değer ile diziyi rastgele oluşturduğumuz yer
	for(i=0;i<n;i++)
    {
    	dizi[i] = rand()%10000;
    	printf("%d \t",dizi[i]);
	}
	
//sıralamayı yaptırdığımız kısım	
    for (i = 1; i < n; i++) {
        key = dizi[i];
        j = i - 1;
        dizi[j + 1] = key;
 
        while (j >= 0 && dizi[j] > key) {
            dizi[j + 1] = dizi[j];
            j = j - 1;
        }
    }
    
//doğru sıralanışın basıldığı döndü
    printf("\n dogru siralanisi: \n");
    for (i = 0; i < n; i++)
        printf("%d ", dizi[i]);
    
    return 0;
}
 



int main(){
    int n;
    printf("Dizi boyutunu giriniz:\n");
    scanf("%d",&n);
    int dizi[n];
    insertionSort(dizi, n);
    
 
    return 0;
}
