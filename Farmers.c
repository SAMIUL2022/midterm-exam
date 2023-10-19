#include <stdio.h>
#include<math.h>
int main ()
{
int t;
scanf("%d",&t);
// printf("%d\n",t);
int m1[1001];
int m2[1001];
int d[101];

 


for (int i = 0; i < t; i++)
{
    scanf("%d %d %d",&m1[i],&m2[i],&d[i]);
    int totalf=m1[i]+m2[i];
    int totalday=m1[i]*d[i];
    double lessday=d[i]-((double)(totalday/totalf));
int fewerday=(int)floor(lessday);
    printf("%d\n",fewerday);
}




    return 0;
}