//Finding a substring inside a string
//This code is not created according to the question. In the question, strstr() function is said not to be used.
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    printf("Enter the password: ");
    scanf("%s", str);
    if (strstr(str, "computerscience") != NULL) { //Look here
        printf("weak password\n");
    } else {
        printf("strong password\n");
    }
    return 0;
}
