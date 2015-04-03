#include <iostream>
#include <stdio.h>

using namespace std;
int query(long long int a[],long long int num,int n)
{
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==num)
        {
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]>num)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    while(q--)
    {
        long long int tmp;
        scanf("%lld",&tmp);
        int ans=query(a,tmp,n);
        if(ans==-1)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",ans);
        }
    }
    return 0;
}
