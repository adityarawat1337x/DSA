#include<stdio.h>
#include<math.h>

double f(double x){
    return 6 * x * x + 11 * x - 35;
}

double f1(double x){
    return 12 * x + 11 ;
}

int main()
{
    double ans=0, tol=1.0,prev;
    int n = 4;
    tol = .5 * pow(10.0, -n);
    printf("\nEnter an Approximation:");
    scanf("%lf", &ans);
    while (1)
    {
        prev = ans;
        if (f1(ans) == 0)
        {
            printf("\nError derivative is 0");
            break;
        }
        printf("\n%lf\t%lf\t%lf\t%lf", ans, f(ans), f1(ans),tol);
        ans = ans - f(ans) / f1(ans);
        if(f(ans)==0)
        {
            printf("\nResult: %lf", ans);
            break;
        }
        else if (fabs(prev-ans)<=tol)
        {
            printf("\nResult: %lf with tolerance: %lf", ans,tol);
            break;
        }
    }
    return 0;
}