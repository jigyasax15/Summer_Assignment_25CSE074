#include <stdio.h>

int main()
{
    int n, i, j, count, maxFreq = 0, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for(i = 0; i < n; i++)
    {
        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("\nElement with maximum frequency = %d", element);
    printf("\nFrequency = %d", maxFreq);

    return 0;
}