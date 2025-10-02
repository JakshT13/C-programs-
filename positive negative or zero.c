#include <stdio.h>
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n > 0)
        printf("%d is positive.\n", n);
    else if (n < 0)
        printf("%d is negative.\n", n);
    else
        printf("You've entered zero.\n");
    return 0;
}