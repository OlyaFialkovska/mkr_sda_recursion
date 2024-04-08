#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
float sum_f(float f, float sum, int i,int n)
{
    if(i<=n)
    {
        f=log(f+3)+i;
        printf("F = %.3f \n",f);
        sum+=f;
        sum_f(f,sum,i+1,n);
    }
    else
        return sum;
}
int main()
{
    float f=2,sum=f;
    int n;
    printf("Input n:");
    scanf("%d", &n);

    printf("F = %.3f\n",f);
    sum=sum_f(f,sum,2,n);
    printf("Sum\t =\t%f",sum);
    return 0;
}
*/


float povern(int i,float f)
{
    if(i>1)
    {
        povern(i-1,f);
        f=3*sin(f) + i;
    }
    return f;
}
int main()
{
    float f=1;
    int n;
    printf("n:");
    scanf("%d", &n);
    f=povern(n,f);
    printf("F_n = %f",f);
    return 0;
}
