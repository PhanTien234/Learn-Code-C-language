#include <stdio.h>
int main(){
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    while(n>=1){
        printf("%d",n%10);
        n=n/10;
    }
    printf("\n");
    return 0;
}