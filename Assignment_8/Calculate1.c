#include <stdio.h>

double CircleArea(float fRadius)
{

    return 3.14 * fRadius * fRadius;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter radius:\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n",dRet);

    return 0;

}