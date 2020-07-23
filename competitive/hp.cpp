
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100009
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define mod 1000000007
long long a[maxn],b[maxn];

// Prototype of a utility function to swap two long longegers
void swap(long long *x, long long *y);

// A class for Min Heap
class MinHeap
{
    long long *harr; // polong longer to array of elements in heap
    long long capacity; // maximum possible size of min heap
    long long heap_size; // Current number of elements in min heap
public:
    // Constructor
    MinHeap(long long capacity);

    // to heapify a subtree with root at given index
    void MinHeapify(long long );

    long long parent(long long i) { return (i-1)/2; }

    // to get index of left child of node at index i
    long long left(long long i) { return (2*i + 1); }

    // to get index of right child of node at index i
    long long right(long long i) { return (2*i + 2); }

    // to extract the root which is the minimum element
    long long extractMin();

    // Decreases key value of key at index i to new_val
    void decreaseKey(long long i, long long new_val);

    // Returns the minimum key (key at root) from min heap
    long long getMin() { return harr[0]; }

    // Deletes a key stored at index i
    void deleteKey(long long i);

    // Inserts a new key 'k'
    void insertKey(long long k);
};

// Constructor: Builds a heap from a given array a[] of given size
MinHeap::MinHeap(long long cap)
{
    heap_size = 0;
    capacity = cap;
    harr = new long long[cap];
}

// Inserts a new key 'k'
void MinHeap::insertKey(long long k)
{
    if (heap_size == capacity)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    // First insert the new key at the end
    heap_size++;
    long long i = heap_size - 1;
    harr[i] = k;

    // Fix the min heap property if it is violated
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(&harr[i], &harr[parent(i)]);
       i = parent(i);
    }
}

// Decreases value of key at index 'i' to new_val.  It is assumed that
// new_val is smaller than harr[i].
void MinHeap::decreaseKey(long long i, long long new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(&harr[i], &harr[parent(i)]);
       i = parent(i);
    }
}

// Method to remove minimum element (or root) from min heap
long long MinHeap::extractMin()
{
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1)
    {
        heap_size--;
        return harr[0];
    }

    // Store the minimum vakue, and remove it from heap
    long long root = harr[0];
    harr[0] = harr[heap_size-1];
    heap_size--;
    MinHeapify(0);

    return root;
}


// This function deletes key at index i. It first reduced value to minus
// infinite, then calls extractMin()
void MinHeap::deleteKey(long long i)
{
    decreaseKey(i, INT_MIN);
    extractMin();
}

// A recursive method to heapify a subtree with root at given index
// This method assumes that the subtrees are already heapified
void MinHeap::MinHeapify(long long i)
{
    long long l = left(i);
    long long r = right(i);
    long long smallest = i;
    if (l < heap_size && harr[l] < harr[i])
        smallest = l;
    if (r < heap_size && harr[r] < harr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(&harr[i], &harr[smallest]);
        MinHeapify(smallest);
    }
}

// A utility function to swap two elements
void swap(long long *x, long long *y)
{
    long long temp = *x;
    *x = *y;
    *y = temp;
}

// Driver program to test above functions
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
slld(k) ;
FOR(i,n)
slld(a[i]);
FOR(i,n)
slld(b[i]) ;
//FOR(j,k){
//    m=0 ;
//    FOR(i,n){
//        if(a[i]*b[i]>a[m]*b[m]){
//            m=i ;
//        }
//
////        if(a[i]*b[i]==a[m]*b[m]&&a[i]<a[m]){
////            m=i ;
////        }
//    }
//    if(a[m]>0)
//    a[m]-- ;
//}
MinHeap h(n) ;
FOR(i,n){
h.insertKey(-1*a[i]*b[i]);}

FOR(i,n){
plld(a[i]) ;
ps(" ");
}

return 0 ;
}
