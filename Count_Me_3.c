#include <stdio.h>
int main ()
{
int t;
scanf("%d",&t);
char a[10001];


for (int i = 0; i < t; i++)
{
   scanf("%s",a);
int small=0;
int capital=0;
int digit=0;
   for (int i = 0; a[i]!='\0'; i++)
   {
    if (a[i]>='a' && a[i]<='z')
   {
    small++;
   }
    if (a[i]>='A' && a[i]<='Z')
   {
    capital++;
   }
    if (a[i]>='0' && a[i]<='9')
   {
    digit++;
   }
   
   }
   
printf("%d %d %d\n",capital,small,digit);
}




    return 0;
}