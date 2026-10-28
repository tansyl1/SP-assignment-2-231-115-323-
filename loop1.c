#include <stdio.h>

int main() {
    int N;
    int i = 1; 

    printf("Enter a number N: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d\n", i); 
        i++;               
    }

    return 0;
}