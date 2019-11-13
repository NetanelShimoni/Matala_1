#include <stdio.h>
#include "myMath.h"
int main()
{
    double x;
    do
    {
        printf("Please insert a real number: ");
    } while (scanf("%le", &x) != 1);
    double ans = 0;
    printf("%f\n", Pow(-5,-2));
    ans = add(Exp((int)x), Pow(x, 3));
    ans = sub(ans, 2);
    printf("The value of f(x) = e^x+x^3-2 at the point %0.4f is %0.4f\n", x, ans);
    ans = mul(x, 3);
    ans = add(ans, mul(Pow(x, 2), 2));
    printf("The value of f(x) = 3x+2x^2 at the point %0.4f is %0.4f\n", x, ans);
    ans = div(mul(Pow(x, 3), 4), 5);
    ans = sub(ans, mul(x, 2));
    printf("The value of f(x) = (4x^3)/5-2x at the point %0.4f is %0.4f\n", x, ans);
}
