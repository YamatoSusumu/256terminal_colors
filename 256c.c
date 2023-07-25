#include <stdio.h>

int main(){
    int i;
    char esc[] = "\\x1b[48;5;";
    for (i = 0; i != 257; i++)
        printf("\x1b[48;5;%dm   %s%dm   \x1b[0m", i, esc, i);
    printf("\n");
    return 0;
}