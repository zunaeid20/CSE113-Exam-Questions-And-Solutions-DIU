//Counting a particular element in a one dimentional array
#include<stdio.h>
int main(){
    int n, count=0, x;
    scanf("%d", &n);
    int arr[n+1];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
        }
    }
    if(count>=x){
        printf("Yes! I will qualify!\n");
    }
    else{
        printf("I am sorry!\n");
    }
    return 0;
}
