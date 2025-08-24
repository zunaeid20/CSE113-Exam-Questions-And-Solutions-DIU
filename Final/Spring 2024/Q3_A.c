//Simple conditional statements
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n>40){
        printf("Baire Agun\n");
    }
    else if(n>=30 && n<=40){
        printf("Sabdhane Jao\n");
    }
    else if(n<30){
        printf("Baire Jaoa Jabe\n");
    }
    return 0;
}
