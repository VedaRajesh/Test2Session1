#include <stdio.h>
int input()
{
   int n;
    printf("please enter a number\n ");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{
    int i=0;
    int next;
    int first=0;
    int second=1;
    while(i<n)
    {
        if(i<=1)
        {
            next=i;
            }
    
    else
    {
      next=first+second;
        first=second;
        second=next;
    }
        }
}
void output(int n, int fibo)
{
    printf("FIBONACCI SERIES OF %d NUMBERS IS %d",n,fibo);
}
int main()
{
    int n,fibo;
   n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}