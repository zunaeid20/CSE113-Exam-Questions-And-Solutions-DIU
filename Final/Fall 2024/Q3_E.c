//Replacing the particular characters of a string with something else
#include<stdio.h>
#include<string.h>
int main(){
    char text[100];
    gets(text);
    int length=strlen(text);
    for(int i=0; i<length; i++){
        if(text[i]>=97 && text[i]<=122 && text[i]!='a' && text[i]!='e' && text[i]!='i' && text[i]!='o' && text[i]!='u'){
            text[i]='#';
        }
    }
    puts(text);
    return 0;
}
