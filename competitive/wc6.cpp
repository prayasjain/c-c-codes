 /*C++ Program to Implement Floyd-Warshall Algorithm
 */
#include <iostream>
#include <conio.h>
using namespace std;
void floyds(int b[][1000])
{
    int i, j, k;
    for (k = 0; k < 1000; k++)
    {
        for (i = 0; i < 1000; i++)
        {
            for (j = 0; j < 1000; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }

}
int arr[10000];
int main()
{
    int b[1000][1000];
    int n,m,x,y,c,t;
    int ans=0;

    cin>>n>>m;
    for(x=0;x<n;x++)
        for(y=0;y<n;y++)
            b[x][y]=100000;
    for(int j=0;j<n-1;j++)
        {cin>>x>>y>>c;
        b[x-1][y-1]=c;
         b[y-1][x-1]=c;

    }

    floyds(b);
    while(m--)
        {cin>>t;
         ans=0;
         for(x=0;x<t;x++)
             cin>>arr[x];
         for(x=0;x<t-1;x++)
             for(y=x+1;y<n;y++)
                ans=ans+b[arr[x]-1][arr[y]-1];







     cout<<ans<<"\n";
    }
}
