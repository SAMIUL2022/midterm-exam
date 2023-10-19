#include <stdio.h>
#include <string.h>
int main ()
{
char a [100001];

scanf("%s",a);
int consonent=0;
int vowel =0;
for (int i = 0; i < strlen(a); i++)
{
    //   printf("%c ",a[i]);
     if (a[i]=='a'|| a[i]== 'e'|| a[i]=='i' || a[i]=='o'||a[i]=='u')
     {
        vowel++;    }
     else
    {consonent++;}
}
printf("%d",consonent);
    return 0;
}