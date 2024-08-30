//to find sum of digits of a num 
#include <stdio.h>

int summation(int num, int sum);

int main()
{
    int num, sum = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    
    sum = summation(num, sum);
    printf("The sum of digits of the entered number is %d", sum);
    return 0;
}

int summation(int num, int sum)
{
    if (num == 0)
        return sum;
    sum += num % 10;
    return summation(num / 10, sum);
}