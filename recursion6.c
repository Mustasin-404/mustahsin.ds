#include<stdio.h>

void baseConverter(int num, int b) {
    int r;
    if(num < b){
        printf("%d", num);
    }
    else{
        r = num % b;
        baseConverter(num/b, b);
        printf("%d", r);
    }
}

int main(){
    int num,base;
    printf("enter number ");
    scanf("%d",&num);
    printf("enter base ");
    scanf("%d",&base);
    
    baseConverter(num, base);
    return 0;
}