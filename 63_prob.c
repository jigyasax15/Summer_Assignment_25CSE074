#include <stdio.h>

int main()
{
    int n, i, j, sum, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter the required sum: ");
    scanf("%d", &sum);

    printf("Pairs are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0)
        printf("No pair found.");

    return 0;
}