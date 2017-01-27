#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,a=0,b=0,c=0,d=0,m,p=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        c=c+b;
        d=d-a;
        m=c+d;
        if(m>p)
            {
                p=m;
            }
    }
    printf("%d\n",p);
}
