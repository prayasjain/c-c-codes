#include<stdio.h>
int a[50001];
int main()
{
    int t,n,i,x,y,k,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        x=0,y=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]==i)
                x++;
            else if(a[a[i]]==i)
                y++;
        }
        y/=2;
        k=x+y;
        s=0;
        if(k!=1)
        {while(k>1)
        {

            s+=(k+1)/2;
            k=(k)/2;

        }}
        else
            s=1;

        printf("%d\n",s);
    }
    return 0;
}
