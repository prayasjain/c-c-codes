#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
void radix_sort(int a[],int n,int m)
    {
        int p=1,x,k;
        queue <int> q[10];
        for(int i=1;i<=m;i++)
        {

            for(int j=0;j<n;j++)
            {
                x=a[j]%((int)(pow(10,p)));
                x/=pow(10,p-1);
                q[x].push(a[j]);

            }
            k=0;
            for(int l=0;l<10;l++)
            {

                while(!q[l].empty())
                    {a[k++]=q[l].front();
                    q[l].pop();}
            }
            p++;
        }
        return;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[n];int max=-1;
    for(int i=0;i<n;i++)
        {cin>>a[i];
        if(a[i]>max)
            max=a[i];
        }
    int m=floor(log10(max)+1);
    radix_sort(a,n,m);
    for(int j=0;j<n;j++)
        cout<<a[j]<<" ";
    return 0;
}


