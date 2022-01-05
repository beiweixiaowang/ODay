#include<bits/stdc++.h>
using namespace std;
int n;
int a[1005],up[1005],dw[1005];
int ans=0;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=n;i>=1;i--)
    {
        up[i]=dw[i]=1;
        for(int j=i+1;j<=n;j++)
        {
            if(a[j]>a[i])
                up[i]=max(up[i],dw[j]+1);
            else if(a[j]<a[i])
                dw[i]=max(dw[i],up[j]+1);
        }
        ans=max(ans,max(up[i],dw[i]));
    }
    printf("%d",ans);
    return 0;
}