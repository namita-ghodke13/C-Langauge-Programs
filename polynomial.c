/*A Polynomial in one variable is of the form a0 + a1x + a2x^2 +... 
For example, 6 - 9x + 2x^5. Write a program to calculate the value of a 
polynomial. Accept the number of terms n, the value of x, and n+1 
coefficients.*/

#include<stdio.h>
#include<math.h>
int main() 
{
    int n,i;
    float x,c[100],res=0;
    printf("Enter the Number of terms in the Polynomial (n) : ");
    scanf("%d",&n);
    printf("Enter the Value of x : ");
    scanf("%f",&x);
    printf("Enter the %d Coefficients (from a0 to a%d) :\n", n + 1, n);
    for(i=0;i<=n;i++) 
    {
        printf("Coefficient a%d: ", i);
        scanf("%f", &c[i]);
    }
    for(i=0;i<=n;i++) 
    {
        res = res + c[i] * pow(x, i);
    }
    printf("The Value of the Polynomial at x = %.2f is %.2f\n", x, res);
}