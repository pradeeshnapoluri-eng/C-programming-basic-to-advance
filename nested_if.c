#include <stdio.h>
int main() {
    printf("-----------AGE CHECKING-----------\n\n");
    int age=30;
    if (age >=20) {
        printf("you are a teen");
    }else {
        if (age >= 10) {
            printf("u are a baby!");
        }
        else{
            if (age >=5) {
                printf("u are a infant");
            }
        }
    }
    return 0;
}