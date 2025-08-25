//Finding that a string is a palindrome or not
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s", &str);
    int length = strlen(str);
    int flag=1; //Look here
    for(int i=0; i<length/2; i++){ //Look here
        if(str[i]!=str[length-1-i]){ //Look here
            flag=0; //Look here
        }
    }
    if(flag==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not a palindrome\n");
    }
    return 0;
}
