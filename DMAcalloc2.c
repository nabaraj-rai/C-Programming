#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int *ptr = (int *)calloc(n, sizeof(int));
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    
    int max = *ptr;
    int min = *ptr;
    
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > max)
            max = *(ptr + i);
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }
    
    printf("\nMaximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    
    free(ptr);
    return 0;
}
