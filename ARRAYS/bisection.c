#include<stdio.h>
#include<math.h>
double f(double x){
     return 6 * x * x + 11 * x - 35;
}
int main(){
    double tol=1, ans=0, left=0, right=0,prev=0;
    int n = 4;
    while (n--)
        tol *= 1 / 10;
    tol *= .5;

    while(left==right || f(left)*f(right)>0){
        scanf("%lf%lf", &left, &right);
    }
        printf("left\t\tright\t\tmid\t\tf(mid)");

    while(1){
        prev = ans;
        ans = (left + right) / 2;
        printf("\n%lf\t%lf\t%lf\t%lf", left, right, ans, f(ans));
        if (f(ans) == 0)
        {
            printf("\nResult: %lf", ans);
            break;
        }
        else if(f(left)*f(ans)>0){
            left = ans;
        }
        else{
            right = ans;
        }
        if(fabs(ans-prev)<=tol){
             printf("\nResult: %lf with tolerance: %lf", ans,tol);
            break;
        }
    }
    return 0;
}