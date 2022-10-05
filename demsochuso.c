#include <stdio.h>
int main(){
    int n, j=0;
    printf("Input n: ");
    scanf("%d", &n);
    while(n>=1){
        j=j+1;
        n=n/10;
    }
    printf("So chu so cua n = %d\n",j);
    return 0;
}