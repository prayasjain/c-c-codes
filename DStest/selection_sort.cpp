#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

void selectionsort(int a[],int n)

{
    int i,j,small,temp;
    
for(i=0;i<n-1;i++)
    
{small=i;
        
for(j=i+1;j<n;j++)
        
{
            if(a[j]<a[small])
                
	{
                 small=j;
                }
        
}

            
temp=a[small];
            
a[small]=a[i];
            
a[i]=temp;

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

selectionsort(a,n);

cout<<"Sorted array is :\n";

for(int j=0;j<n;j++)
    
cout<<a[j]<<" ";

return 0;
}

