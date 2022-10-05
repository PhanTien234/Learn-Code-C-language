#include <stdio.h>
int main(){
    int a=6, b=8, i;
    printf("a=%d, b=%d\n",a,b);
    i=a;
    a=b;
    b=i;
    printf("a=%d, b=%d\n",a,b);
    return 0;
}