//Finding a substring inside a string
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
