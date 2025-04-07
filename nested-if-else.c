#include <stdio.h>
int main() {
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000) {
        printf("I will go to cox's bazar\n");
        if(tk >= 10000) {
            printf("I will go to Cox's Bazar and Saint Martin\n");
        } else {
            printf("I will go to Cox's Bazar and Kuakata\n");
        }
    } else {
        printf("I will stay at home\n");
    }
    return 0;
}