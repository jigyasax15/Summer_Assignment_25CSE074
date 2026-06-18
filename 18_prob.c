#include <stdio.h>

int main() {
    int num, temp, digit, i;
    long long sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        digit = temp % 10;
        fact = 1;

        for(i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if(sum == num)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}