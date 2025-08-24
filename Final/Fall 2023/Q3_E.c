//Calculating the sum of the digits of a number using the concept of recursion
#include<stdio.h>
int digitsum(int n){
    if(n==0){
        return 0; //Look here
    }
    return (n%10)+digitsum(n/10); //Look here
}
int main(){
    int n;
    scanf("%d", &n);
    int sumofdigits=digitsum(n);
    printf("%d\n", sumofdigits);
    return 0;
}
