//Replacing an element of a string with an another element
#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    scanf("%s", name);
    getchar(); //Look here
    char x;
    scanf("%c", &x);
    getchar(); //Look here
    char y;
    scanf("%c", &y);
    int length=strlen(name);
    for(int i=0; i<length; i++){
        if(name[i]==x){
            name[i]=y;
        }
    }
    for(int i=0; i<length; i++){
        printf("%c", name[i]);
    }
    return 0;
}
