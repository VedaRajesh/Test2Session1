#include<stdio.h>
void input_string(char *s1,char *s2)
{
    printf("enter the string and substring\n");
    scanf("%s%s",s1,s2);
}
int string_length(char *s2)
{
    int j;
    for(j=0;s2[j]!='\0';j++);
    return j;
}
int string_index(char *s1,char*s2)
{

    int i,j;
    for(i=0,j=0;s1[i]!='\0' && s2[j]!='\0';i++)
        {
            if(s1[i]==s2[j])
            {
                j++;
            }
            else
            {
                j=0;
            }
        }
    return i-j;
}
void output(char *s1,char *s2,int index,int I)
{
    if(index==I)
        printf("the index of substring is %d",index);
    else
        printf("substring not found");
}
int main()
{
    char s1[100],s2[100];
    int index,I;
    input_string(s1,s2);
    I= string_length(s2);
    index=string_index(s1,s2);
    output(s1,s2,index,I);
    return 0;
}
