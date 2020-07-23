#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define mod 1000000007
#define bitcount __builtin_popcountll
#define ll long long
char arr[20][20];

int a[20][20];
int comp(int x1,int y1,int x2,int y2)
{
    if(x1==x2)
    {
        if(y1>y2)
            swap(y1,y2);
        int z=(y2-y1-1);
        int k=(a[x2][y2]-1)/4+(a[x1][y1]-1)/4;
        if(k<=z)
        {
            return a[x2][y2]*a[x1][y1];
        }
        else
        {
            int ans=0;
            int q=a[x1][y1],w=a[x2][y2];
            q--;w--;q/=4;w/=4;
            for(int t=y2-w;t<=y1+q+1;t++)
                {
                ans=max(ans,(4*(t-y1-1)+1)*(4*(y2-t)+1));
            }
            return ans;
        }
    }
    else if(y1==y2)
    {
        if(x1>x2)
            swap(x1,x2);
        int z=(x2-x1-1);
        int k=(a[x2][y2]-1)/4+(a[x1][y1]-1)/4;
        if(k<=z)
        {
            return a[x2][y2]*a[x1][y1];
        }
        else
        {
            int ans=0;
            int q=a[x1][y1],w=a[x2][y2];
            q--;w--;q/=4;w/=4;
            for(int t=x2-w;t<=x1+q+1;t++)
                {
                ans=max(ans,(4*(t-x1-1)+1)*(4*(x2-t)+1));
            }
            return ans;
        }
    }
    else
    {
        int q=a[x1][y1],w=a[x2][y2],ans=0;
        q--;w--;q/=4;w/=4;
        int d=abs(x1-x2)-1,e=abs(y2-y1)-1;
        for(int i=0;i<=q;i++)
        {
            for(int j=0;j<=w;j++)
            {
                if((i>d&&j>e)||(i>e&&j>d))
                    continue;
                else
                {
                    ans=max(ans,(4*i+1)*(4*j+1));
                }
            }
        }
        return ans;
    }
    return -1;
}
int main()
{
	int i,j,k,l,x,y,ans=0;
	int n,m;
	sd(n);
	sd(m);
	for(i=0;i<n;i++)
        ss(arr[i]);
    /*for(i=0;i<n;i++)
        printf("%s\n",a[i]);*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            //printf("%c",arr[i][j]);
            if(arr[i][j]=='B')
                a[i][j]=0;
            else
            {
                a[i][j]=1;
                int e,b,c,d;
                e=b=c=d=0;
                for(k=i-1;k>=0&&arr[k][j]=='G';k--)
                    e++;
                for(k=j-1;k>=0&&arr[i][k]=='G';k--)
                    b++;
                for(k=i+1;k<n&&arr[k][j]=='G';k++)
                    c++;
                for(k=j+1;k<m&&arr[i][k]=='G';k++)
                    d++;
                a[i][j]=4*min(min(min(e,b),c),d);
                a[i][j]++;
                //printf("%d %d %d\n",i,j,a[i][j]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                for(k=j+1;k<m;k++)
                {
                    if(a[i][k]!=0)
                        ans=max(ans,comp(i,j,i,k));
                        //printf("%d %d %d %d %d\n",i,j,i,k,ans);
                }
                for(k=i+1;k<n;k++)
                {
                    for(l=0;l<m;l++)
                    {
                        if(a[k][l]!=0)
                            ans=max(ans,comp(i,j,k,l));
                        //printf("%d %d %d %d %d\n",i,j,k,l,ans);
                    }
                }
            }
        }
    }
    printf("%d\n",ans);
	return 0;
}
