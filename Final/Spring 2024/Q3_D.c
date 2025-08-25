//Replacing the vowels of a string with a particular element
#include<stdio.h>
#include<string.h>
int main(){
    char string[100], x;
    gets(string);
    //Don't need to put getchar() function because we are not using scanf() function above
    scanf("%c", &x);
    int length = strlen(string);
    for(int i=0; i<length; i++){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'){
            string[i]=x;
        }
    }
    printf("%s\n", string);
    return 0;
}
