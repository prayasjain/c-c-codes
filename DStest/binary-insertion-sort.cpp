#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int BinarySearch (int a[], int low, int high, int key)
{
    int mid;

    if (low == high)
        return low;

    mid = low + ((high - low) / 2);

    if (key > a[mid])
        return BinarySearch (a, mid + 1, high, key);
    else if (key < a[mid])
        return BinarySearch (a, low, mid, key);

    return mid;
}
void b_insertionsort(int a[],int n)
{
    int i,j,tmp,ins;
    for(i=1;i<n;i++)
    {ins = BinarySearch (a, 0, i, a[i]);
        if (ins < i) {
            tmp = a[i];
            for (j = i - 1; j >= ins; j--)
                a[j + 1] = a[j];
            a[ins] = tmp;
        }
    }
    return;
}
int main(){
int n,i;
cout<<"Enter size of array to be sorted : ";
cin>>n;
int a[n];
cout<<"Enter elements of the array :\n";
for(i=0;i<n;i++)
    cin>>a[i];
b_insertionsort(a,n);
cout<<"Sorted array is :\n";
for(int j=0;j<n;j++)
    cout<<a[j]<<" ";
return 0;
}

