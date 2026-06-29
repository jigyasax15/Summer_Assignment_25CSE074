#include <stdio.h>

int main()
{
    int n, i, sum = 0, total, missing;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Array elements are: ");
    for(i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("\nMissing number = %d", missing);

    return 0;
}