//Funciones utiles C
#include<stdio.h>

int arr[20];

//organizar enteros DESC
int main()
{
    int n = 10, i;
    int arr[n];

    array_sort(arr, 0, n-1);

    printf("Listado: ");
    for(i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}


int array_sort(int arr[], int min, int max)
{
    int mid;
    if( min < max)
    {
        mid = (min + max) / 2;

        array_sort(arr, min, max);
        
        array_sort(arr, mid+1, max);
    }
    return 0;
}

