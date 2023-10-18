#include <stdio.h>
main()
{
int n,k=1;
scanf("%d", &n);
for(int i=2;(i*i)<=n;i++)
    if((n%i)==0)
        k=0;
if(k==1)
    printf("YES");
if(k==0)
    printf("NO");
}



