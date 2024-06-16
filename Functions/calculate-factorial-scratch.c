#include<stdio.h>

// Function to calculate factorial
int fact(int);

// Function to calculate power
int power(int, int);

int main()
{
    float sum = 0;
    int n, x;

    // Input the values of n and x
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the value of x:");
    scanf("%d", &x);

    // Calculate the sum using the Taylor series
    for (int k = 0; k <= n; k++)
    {
        // Calculate each term of the Taylor series: x^k / k!
        sum = sum + ((1.0 * power(x, k)) / fact(k));
    }

    // Output the result
    printf("%.1f", sum);

    return 0;
}

// Function to calculate factorial
int fact(int y)
{
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans *= i;  // Multiply ans by each number from 1 to y
    }
    return ans;
}

// Function to calculate power
int power(int y, int z)
{
    int pow = 1;
    for (int i = 1; i <= z; i++)
    {
        pow *= y;  // Multiply pow by y, z times
    }
    return pow;
}
