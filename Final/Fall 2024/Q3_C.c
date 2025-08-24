//Finding the averages of the rows of a two dimensional array
#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int num[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &num[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        float sum=0.0;
        for(int j=0; j<m; j++){
            sum+=num[i][j];
        }
        float avg=sum/m;
        printf("%f\n", avg);
    }
    return 0;
}
