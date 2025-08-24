//Finding the sum of rows of a two dimensional array
//Finding the highest among the sum of rows of a two dimensional array
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n][7];
    for(int i=0; i<n; i++){
        for(int j=0; j<7; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int arr2[n];
    for(int i=0; i<n; i++){
        arr2[i]=0;
        for(int j=0; j<7; j++){
            arr2[i]+=arr[i][j];
        }
    }
    int High=arr2[0];
    for(int i=0; i<n; i++){
        if(arr2[i]>High){
            High=arr2[i];
        }
    }
    int kutu=1;
    for(int i=0; i<n; i++){
        if(arr2[i]==High){
            break;
        }
        kutu++;
    }
    printf("%d\n", kutu);
    return 0;
}
