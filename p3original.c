#include<stdio.h>
int input_number()
{
    int n;
    printf("ENTER YOUR NUMBER\n");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    int i,composite;
    for(i=1;i<n/2;i++)
    {
        if(n%i==0)
        {
         composite=1;
        }
    }
    return composite;
}
 void output(int n,int composite)
 {
     if(composite==1)
     printf("%d IS COMPOSITE NUMBER",n);
     else 
     printf("%d IS NOT COMPOSITE NUMBER",n);

 }
 int main()
 {
 int n,composite;
 n=input_number();
 composite=is_composite(n);
 output(n,composite);
 return 0;
 }