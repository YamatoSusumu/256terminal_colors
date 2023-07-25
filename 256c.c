#include <stdio.h>

int main(void){
    int i;
    for (i = 0; i != 257; i++)
        printf("\x1b[48;5;%dm  \\x1b[48;5;%dm   \x1b[0m", i, i);
    printf("\n");
    return 0;
}
