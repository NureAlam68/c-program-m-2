#include <stdio.h>
int main() {
    int tk;
    scanf("%d", &tk);
    if(tk >= 100) {
        printf("I will eat burger");
    } else if(tk >= 50) {
        printf("I will eat pizza");
    } else if(tk >= 20) {
        printf("I will eat sandwich");
    } else if(tk >= 10) {
        printf("I will eat chips");
    } else {
        printf("I will eat nothing");
    }
    return 0;
}