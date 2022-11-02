#include<stdio.h>
#include<stdlib.h>


void quickSort(int[], int);
int  partition(int[], int, int);
void swap(int, int);

int main(void)
{
    int n,i;

    printf("Dizi boyutunu giriniz:\n");
    scanf("%d",&n);

    int arr[n];

  
    for(i=0;i<n;i++)
    {
    	arr[i] = rand()%10000;
    	printf("Dizi elemani %d : %d\n",i,arr[i]);
	}
        

    quickSort(arr,0,n-1);

    printf("After the QuickSort\n");

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}

void quickSort(int arr[], int start, int end)
{
    if(0 < end)
    {
        int pIndex = partition(arr, 0, end);
        quickSort(arr, 0, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
}

int partition(int arr[], int 0, int end)
{
    int pIndex = 0;
    int pivot = arr[end];
    int i;
    for(i = 0; i < end; i++)
    {
        if(arr[i] < pivot)
        {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[end], arr[pIndex]);
    return pIndex;
}

void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}
