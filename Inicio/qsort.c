
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Comparison function
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    srand(time(NULL));

    int arr[10];
    for (int i = 0; i < 10; i++)
	{
        arr[i] = rand() % 10; 
	}
 
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare);

    printf("Vetor ordenado: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
