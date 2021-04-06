#include<stdio.h>

int main(){
    int n=3;
    float ans[3]={0,0,0};
    float arr[3][4];
    for(int i=0;i<n;i++)
        for(int j=0;j<n+1;j++)
            scanf("%f",&arr[i][j]);
    
    printf("Augmented Matrix:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++)
            printf("%f ",arr[i][j]);
        printf("\n");
    }

     for (int i = 0; i < n; i++) {
        if (arr[i][i] == 0) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j][i] != 0) {
                    for (int k = 0; k < n + 1; k++) {
                        double temp = arr[i][k];
                        arr[i][k] = arr[j][k];
                        arr[j][k] = temp;
                    }
                }
            }
        }
        if (arr[i][i] == 0) {
            fprintf(stderr, "Given system of eq do not have a Unique Solution.");
            return 1;
        }
        // make the first element 1
        double temp = arr[i][i];
        for (int j = i; j < n + 1; j++) {
            arr[i][j] = arr[i][j] / temp;
        }
     }
     //conversion
    for(int i=1;i<n;i++){
        for(int j=0;j<n+1;j++){
            if(i>j){
                float ratio = arr[i][j]/arr[j][j];
                for(int k=0;k<n+1;k++){
                    arr[i][k]-=arr[j][k]*ratio;
                }
            }else break;
        }
    }

    printf("Upper triangular Matrix:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++)
            printf("%f ",arr[i][j]);
        printf("\n");
    }

    double x[n]; // array to store solutions
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i][i] == 0) {
            continue;
        }
        x[i] = arr[i][n];
        for (int j = i + 1; j < n; j++) {
            x[i] -= arr[i][j] * x[j];
        }
        x[i] = x[i] / arr[i][i];
    }
    printf("Solutions: \n");
    for (int i = 0; i < n; i++) {
        printf("x_%d = %lf\n", i, x[i]);
    }
    return 0;
}