#include<stdio.h>
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
  
    printf("%d\n",sum(400,600));
    printf("%d",sum(100,20));
    return 0;
}