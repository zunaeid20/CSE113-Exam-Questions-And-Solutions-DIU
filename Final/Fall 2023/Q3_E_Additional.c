//Calculating the sum of the digits of a number using loops
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum=0;
    while(n!=0){
        int rem=n%10; //Look here
        n=n/10; //Look here
        sum+=rem; //Look here
    }
    printf("%d\n", sum);
    return 0;
}
