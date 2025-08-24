//Storing data in an array of structure
#include<stdio.h>
typedef struct studentinfo{
    char fName[100];
    char lName[100];
    float sscGpa;
    float hscGpa;
    char phone[100];
}stinfo;
int main(){
    int n;
    scanf("%d", &n);
    stinfo arr[n]; //Look here
    for(int i=0; i<n; i++){
        scanf("%s", &arr[i].fName);
        getchar();
        scanf("%s", &arr[i].lName);
        scanf("%f", &arr[i].sscGpa);
        scanf("%f", &arr[i].sscGpa);
        getchar();
        scanf("%s", &arr[i].phone);
    }
    for(int i=0; i<n; i++){
        if((arr[i].sscGpa+arr[i].hscGpa)>=9.7 && arr[i].sscGpa>=4.75 && arr[i].hscGpa>=4.75){
            printf("%s %s", arr[i].fName, arr[i].lName);
        }
    }
    return 0;
}
