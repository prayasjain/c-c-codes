#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;


void bubblesort(int a[],int n)

{
    int i,j,temp;
    
for(i=0;i<n;i++)
    
{
        for(j=1;j<n-i;j++)
        
{
            if(a[j]<a[j-1])
                
{
                 temp=a[j];
                 
a[j]=a[j-1];
                
 a[j-1]=temp;
                }
        
}
    
}
    
return;
}

int main()
{
int n,i;
cout<<"Enter size of array to be sorted : ";

cin>>n;
int a[n];

cout<<"Enter elements of the sorted array :\n";

for(i=0;i<n;i++)
    
cin>>a[i];

bubblesort(a,n);

cout<<"Sorted array is :\n";

for(int j=0;j<n;j++)
    
cout<<a[j]<<" ";

return 0;
}
