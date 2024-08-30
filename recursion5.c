#include<stdio.h>
void hexadecimal(int num){
    int r;
    if(num<16){
        printf("%d",num);
    }
    else{
        r=num%16;
        hexadecimal(num/16);
        printf("%d",r);

    }
}
int main(){
int num=296;
hexadecimal(num);
return 0;

}