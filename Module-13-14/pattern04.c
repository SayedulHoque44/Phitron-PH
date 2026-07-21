#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int stars = n + 2;

    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");

        // Decrease stars
        if (stars > 3)
            stars--;
        else
            stars -= 2;
    }

    return 0;
}