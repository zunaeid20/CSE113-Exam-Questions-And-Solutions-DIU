//Finding the smallest among 3 numbers of a one dimensional array
#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0; i<3; i++){
        scanf("%d", &arr[i]);
    }
    int smallest=arr[0];
    for(int i=0; i<3; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("%d\n", smallest);
    return 0;
}
