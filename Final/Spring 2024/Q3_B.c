//Counting elements in a one dimensional array
#include<stdio.h>
int main(){
    int arr[8];
    for(int i=0; i<7; i++){
        scanf("%d", &arr[i]);
    }
    int counter=0;
    for(int i=0; i<7; i++){
        if(arr[i]>35){
            counter++;
        }
    }
    if(counter>3){
        printf("Heat-wave burning\n");
    }
    else{
        printf("No more heat waves\n");
    }
    return 0;
}
