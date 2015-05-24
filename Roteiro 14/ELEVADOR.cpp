#include <stdio.h>
#include <math.h>

int l,c,r1,r2,pr,l1,c1,l2,c2,cont,v;

int main (void)
{
    scanf("%d %d %d %d",&l,&c,&r1,&r2);
    while(((l>0)&&(c>0))&&((r1>0)&&(r2>0)))
    {
        if(r1+r1>l || r1+r1>c || r2+r2>l || r2+r2>c)printf("N\n");
        else
        {
            v=0;
            l1=r1;
            c1=c-r1;
            for(cont=1; cont<=3 && v==0; cont++)
            {
                switch(cont)
                {
                case 1:
                    l2=r2;
                    c2=r2;
                    break;
                case 2:
                    l2=l-r2;
                    c2=r2;
                    break;
                case 3:
                    l2=l-r2;
                    c2=c-r2;
                    break;
                }
                if(sqrt((pow(l2-l1,2)+pow(c2-c1,2)))>=r1+r2)v=1;
            }
            if(v==1)printf("S\n");
            else printf("N\n");
        }
        scanf("%d %d %d %d",&l,&c,&r1,&r2);
    }
    return 0;
}

