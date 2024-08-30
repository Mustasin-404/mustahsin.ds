#include<stdio.h>
#include<string.h>

int main(){
int i;
char str[]="dawar";
int len=strlen(str);
for(i=len-1;i>=0;i--){
	printf("%c",str[i]);
}
return 0;
}