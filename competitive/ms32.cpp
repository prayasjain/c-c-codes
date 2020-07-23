
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  1000001
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

// a structure to represent an edge in graph
long w[maxn] ;


void swap(long *x, long *y);

// A class for Min Heap
class MinHeap
{
    long *harr; // polonger to array of elements in heap
    long capacity; // maximum possible size of min heap
    long heap_size; // Current number of elements in min heap
public:
    // Constructor
    MinHeap(long capacity);

    // to heapify a subtree with root at given index
    void MinHeapify(long );

    long parent(long i) { return (i-1)/2; }

    // to get index of left child of node at index i
    long left(long i) { return (2*i + 1); }

    // to get index of right child of node at index i
    long right(long i) { return (2*i + 2); }

    // to extract the root which is the minimum element
    long extractMin();

    // Decreases key value of key at index i to new_val
    void decreaseKey(long i, long new_val);

    // Returns the minimum key (key at root) from min heap
    long getMin() { return harr[0]; }

    // Deletes a key stored at index i
    void deleteKey(long i);

    // Inserts a new key 'k'
    void insertKey(long k);
};

// Constructor: Builds a heap from a given array a[] of given size
MinHeap::MinHeap(long cap)
{
    heap_size = 0;
    capacity = cap;
    harr = new long[cap];
}

// Inserts a new key 'k'
void MinHeap::insertKey(long k)
{
    if (heap_size == capacity)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    // First insert the new key at the end
    heap_size++;
    long i = heap_size - 1;
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
void MinHeap::decreaseKey(long i, long new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(&harr[i], &harr[parent(i)]);
       i = parent(i);
    }
}

// Method to remove minimum element (or root) from min heap
long MinHeap::extractMin()
{
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1)
    {
        heap_size--;
        return harr[0];
    }

    // Store the minimum vakue, and remove it from heap
    long root = harr[0];
    harr[0] = harr[heap_size-1];
    heap_size--;
    MinHeapify(0);

    return root;
}


// This function deletes key at index i. It first reduced value to minus
// infinite, then calls extractMin()
void MinHeap::deleteKey(long i)
{
    decreaseKey(i, 1e9);
    //extractMin();
}

// A recursive method to heapify a subtree with root at given index
// This method assumes that the subtrees are already heapified
void MinHeap::MinHeapify(long i)
{
    long l = left(i);
    long r = right(i);
    int smallest = i;
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
void swap(long *x, long *y)
{
    long temp = *x;
    *x = *y;
    *y = temp;
}





struct Edge
{
    int src, dest;
};

// a structure to represent a graph
struct Graph
{
    // V-> Number of vertices, E-> Number of edges
    int V, E;

    // graph is represented as an array of edges
    struct Edge* edge;
};

struct subset
{
    int parent;
    int rank;
}sub[maxn];

// Creates a graph with V vertices and E edges
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph) );
    graph->V = V;
    graph->E = E;

    graph->edge = (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );

    return graph;
}

// A utility function to find set of an element i
// (uses path compression technique)
int find(struct subset subsets[], int i)
{
    // find root and make root as parent of i (path compression)
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);

    return subsets[i].parent;
}

// A function that does union of two sets of x and y
// (uses union by rank)
void Union(struct subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    // Attach smaller rank tree under root of high rank tree
    // (Union by Rank)
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;

    // If ranks are same, then make one as root and increment
    // its rank by one
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// The main function to check whether a given graph contains cycle or not
int isCycle( struct Graph* graph )
{
    int V = graph->V;
    int E = graph->E;

    // Allocate memory for creating V sets
    struct subset *subsets =
        (struct subset*) malloc( V * sizeof(struct subset) );

    for (int v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    // Iterate through all edges of graph, find sets of both
    // vertices of every edge, if sets are same, then there is
    // cycle in graph.
    for(int e = 0; e < E; ++e)
    {
        int x = find(subsets, graph->edge[e].src);
        int y = find(subsets, graph->edge[e].dest);

        if (x == y)
            return 1;

        Union(subsets, x, y);
    }
    return 0;
}

// Driver program to test above functions
int main()
{
    /* Let us create following graph
         0
        |  \
        |    \
        1-----2 */
    MinHeap h(maxn);
    int V , E ;
    sd(V) ;
    sd(E) ;
    struct Graph* graph = createGraph(V, E);
    for(int i=0;i<V;i++){
        sd(w[i]) ;
        h.insertKey(w[i]) ;

    }
    // add edge 0-1
    for (int v = 0; v < V; ++v)
    {
        sub[v].parent = v;
        sub[v].rank = 0;
    }
    long mans ;
    long ans[maxn] ;
    for(int i=0;i<V;i++){
        ans[i]=w[i] ;
    }
    for(int i=0;i<E;i++){
        int x,y ;
        sd(x) ;
        sd(y) ;
        graph->edge[i].src = x-1;
        graph->edge[i].dest = y-1;
        graph->E=i+1 ;
        if(find(sub,x-1)==find(sub,(y-1))){
            printf("%ld\n",mans) ;

            continue ;
        }
        //cout<<find(sub,0)<<find(sub,1)<<find(sub,2)<<find(sub,3)<<find(sub,4)<<"\n" ;


        //visit.clear() ;

            int ty=find(sub,x-1) ;
            int ty2=find(sub,y-1) ;
            int tmp1=ans[ty] ;
            int tmp2=ans[ty2] ;


            ans[ty]+=ans[ty2] ;
            ans[ty2]=ans[ty] ;
            h.insertKey(ans[ty]) ;
            Union(sub,x-1,y-1) ;
            if(find(sub,x-1)==ty){
                ans[ty2]=0 ;
                h.deleteKey(ty2) ;

            }

            else
                {
                    ans[ty]=0 ;
                     h.deleteKey(ty) ;
                    }

         mans=h.getMin() ;
//        for(int j=0;j<V;j++){
//                if(ans[j]!=0)
//            mans=min(ans[j],mans) ;
//            //cout<<ans[j]<<" " ;
//        }
        printf("%ld\n",mans) ;


    }


    return 0;
}
