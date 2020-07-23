#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int part(int a[],int p,int r)
    {
    int q=p;int u;
    for(u=p;u<r;u++)
        {if(a[u]<=a[r])
            {
            int temp;
            temp=a[q];
            a[q]=a[u];
            a[u]=temp;
            q++;
        }}
         int w;
         w=a[q];
    a[q]=a[r];
    a[r]=w;
    return q;


}
void quicksort(int a[],int p,int r)
    {
    if(p>=r)
        return;
    else
        {
        int q=part(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}
int main(){
int n,i;
cout<<"Enter size of array to be sorted : ";
cin>>n;
int a[n];
cout<<"Enter elements of the array :\n";
for(i=0;i<n;i++)
    cin>>a[i];
quicksort(a,0,n-1);
cout<<"Sorted array is :\n";
for(int j=0;j<n;j++)
    cout<<a[j]<<" ";
return 0;
}
