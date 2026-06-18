#include <stdio.h>

int main() {
    long long num;
    int i, largest = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    for(i = 2; i <= num; i++) {
        while(num % i == 0) {
            largest = i;
            num /= i;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}