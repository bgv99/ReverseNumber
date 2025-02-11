#include <stdio.h>

void reverseNumber(int n)
{
    int reverse_n = 0;
    int i = 0;

    while(i <= n)
    {
        reverse_n = reverse_n * 10 + n % 10;
        n /= 10;
        i++;
    }

    printf("%d\n", reverse_n);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    reverseNumber(n);

    return 0;
}