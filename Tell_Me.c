#include <stdio.h>
int main ()
{
int t;
scanf("%d",&t);

while (t--)
{
    int k;
    scanf("%d",&k);
    int a [k];
    for (int i = 0; i < k; i++)
    {
        scanf("%d",&a[i]);
    //    printf("%d",a[i]);
    }
    int c;
    scanf("%d",&c);
int yes=0;int no=0;
    for (int i = 0; i < k; i++)
    {
     if ( a[i]==c)
     {
        yes++;
     }
               
         else
    no++;
    }
   
    if (yes>0)
    {
        printf("YES\n");

    }
    else
     printf("NO\n");
}




    return 0;
}