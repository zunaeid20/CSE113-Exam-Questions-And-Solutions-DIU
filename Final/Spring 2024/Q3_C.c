//Finding the highest among the elements of a two dimensional array
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int Highest=arr[0][0]; //Look here
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>Highest){ //Look here
                Highest=arr[i][j]; //Look here
            }
        }
    }
    printf("%d\n", Highest);
    return 0;
}
