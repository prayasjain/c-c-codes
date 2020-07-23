#include<stdio.h>
long long int k=1000000007;
long long int arr[100001],tree[1200000],lazy1[1200000][2];
void build_tree(long node, long a, long b) {
    if(a > b) return; // Out of range

  	if(a == b) { // Leaf node
    		tree[node] = arr[a];
    		lazy1[node][0]=1;
    		lazy1[node][1]=0;
    		// Init value#include<stdio.h>
long long int k=1000000007;
long long int arr[100001],tree[1200000],lazy1[1200000][2];
void build_tree(long node, long a, long b) {
    if(a > b) return; // Out of range

  	if(a == b) { // Leaf node
    		tree[node] = arr[a];
    		lazy1[node][0]=1;
    		lazy1[node][1]=0;
    		// Init value
		return;
	}

	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
    lazy1[node][0]=1;
    lazy1[node][1]=0;
	tree[node] = (tree[node*2]+tree[node*2+1])%k;
	// Init root value
}
void update1(long node, long a, long b, long i, long j, long long int value) {

	if(lazy1[node][0] != 1||lazy1[node][1]!=0) { // This node needs to be updated
   		tree[node] =((lazy1[node][0]*tree[node])%k+lazy1[node][1])%k; // Update it

		if(a != b) {
			lazy1[2*node][0]=(lazy1[2*node][0]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]+(((((a+b)/2)-a+1)*lazy1[node][1])/(b-a+1))%k)%k;
			lazy1[2*node+1][0]=(lazy1[2*node+1][0]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]+(((b-((a+b)/2))*lazy1[node][1])/(b-a+1))%k)%k;
			// Mark child as lazy
		}

   		lazy1[node][0] = 1;
   		lazy1[node][1]=0; // Reset it
  	}

	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;

  	if(a >= i && b <= j) {
          //  printf("%ld %lld\n",node,tree[node]);
    // Segment is fully within range
        tree[node] =(tree[node]+((b-a+1)*value))%k;

		if(a != b) {
			lazy1[2*node][1]=(lazy1[2*node][1]+((((a+b)/2)-a+1)*value)%k)%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]+((b-((a+b)/2))*value)%k)%k;
			// Mark child as lazy
		}

    		return;
	}

	update1(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update1(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = (tree[node*2]+ tree[node*2+1])%k; // Updating root with max value
}
void update2(long node, long a, long b, long i, long j, long long int value) {

if(lazy1[node][0] != 1||lazy1[node][1]!=0) { // This node needs to be updated
   		tree[node] =((lazy1[node][0]*tree[node])%k+lazy1[node][1])%k; // Update it

		if(a != b) {
			lazy1[2*node][0]=(lazy1[2*node][0]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]+(((((a+b)/2)-a+1)*lazy1[node][1])/(b-a+1))%k)%k;
			lazy1[2*node+1][0]=(lazy1[2*node+1][0]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]+(((b-((a+b)/2))*lazy1[node][1])/(b-a+1))%k)%k;
			// Mark child as lazy
		}

   		lazy1[node][0] = 1;
   		lazy1[node][1]=0; // Reset it
  	}

	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;

  	if(a >= i && b <= j) { // Segment is fully within range
    		tree[node] =(tree[node]* value)%k;

		if(a != b) { // Not leaf node
			lazy1[node*2][0]=(lazy1[node*2][0]*value)%k;
			lazy1[node*2+1][0]=(lazy1[node*2+1][0]*value)%k;
			lazy1[node*2][1]=(lazy1[node*2][1]*value)%k;
			lazy1[node*2+1][1]=(lazy1[node*2+1][1]*value)%k;
		}

    		return;
	}

	update2(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update2(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = (tree[node*2]+ tree[node*2+1])%k; // Updating root with max value
}
void update3(long node, long a, long b, long i, long j, long long int value) {
if(lazy1[node][0] != 1||lazy1[node][1]!=0) { // This node needs to be updated
   		tree[node] =((lazy1[node][0]*tree[node])%k+lazy1[node][1])%k; // Update it

		if(a != b) {
			lazy1[2*node][0]=(lazy1[2*node][0]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]+(((((a+b)/2)-a+1)*lazy1[node][1])/(b-a+1))%k)%k;
			lazy1[2*node+1][0]=(lazy1[2*node+1][0]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]+(((b-((a+b)/2))*lazy1[node][1])/(b-a+1))%k)%k;
			// Mark child as lazy
		}

   		lazy1[node][0] = 1;
   		lazy1[node][1]=0; // Reset it
  	}

	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    	if(a >= i && b <= j) { // Segment is fully within range
    		tree[node] =((b-a+1)*value);

		if(a != b) { // Not leaf node
			lazy1[2*node][0]=0;
			lazy1[2*node][1]=(value*(((a+b)/2)-a+1))%k;
			lazy1[2*node+1][0]=0;
			lazy1[2*node+1][1]=(value*(b-((a+b)/2)))%k;
		}

    		return;
	}

	update3(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update3(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = (tree[node*2]+ tree[node*2+1])%k; // Updating root with max value
	}


long getMid(long s, long e) {  return s + (e -s)/2;  }
long long getSumUtil( long ss, long se, long qs, long qe, long index)
{
   if(lazy1[index][0] != 1||lazy1[index][1]!=0) {
       // printf("%lld %lld %ld\n",lazy1[index][0],lazy1[index][1],index);// This node needs to be updated
   		tree[index] =((lazy1[index][0]*tree[index])%k+lazy1[index][1])%k; // Update it

		if(ss != se) {
			lazy1[2*index][0]=(lazy1[2*index][0]*lazy1[index][0])%k;
			lazy1[2*index][1]=(lazy1[2*index][1]*lazy1[index][0])%k;
			lazy1[2*index][1]=(lazy1[2*index][1]+(((((ss+se)/2)-ss+1)*lazy1[index][1])/(se-ss+1))%k)%k;
			lazy1[2*index+1][0]=(lazy1[2*index+1][0]*lazy1[index][0])%k;
			lazy1[2*index+1][1]=(lazy1[2*index+1][1]*lazy1[index][0])%k;
			lazy1[2*index+1][1]=(lazy1[2*index+1][1]+(((se-((ss+se)/2))*lazy1[index][1])/(se-ss+1))%k)%k;
			// Mark child as lazy
		}

   		lazy1[index][0] = 1;
   		lazy1[index][1]=0; // Reset it
  	}
    // If segment of this node is a part of given range, then return the
    // sum of the segment
    if (qs <= ss && qe >= se)
        return tree[index];

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;

    // If a part of this segment overlaps with the given range
    long mid = getMid(ss, se);
    return (getSumUtil(ss, mid, qs, qe, 2*index) +
           getSumUtil(mid+1, se, qs, qe, 2*index+1))%k;
}
int main()
{
    long long int v;
    int ch;
    long N,Q;
    long i,j,x,y;
    scanf("%ld %ld",&N,&Q);
    for(long i=0;i<N;i++)
        scanf("%lld ",&arr[i]);
    build_tree(1,0,N-1);
    while(Q--)
    {
        scanf("%d ",&ch);
        if(ch==1)
        {
            scanf("%ld %ld %lld",&x,&y,&v);
            update1(1,0,N-1,x-1,y-1,v);


        }
        else if(ch==2)
        {
            scanf("%ld %ld %lld",&x,&y,&v);
            update2(1,0,N-1,x-1,y-1,v);


        }
        else if(ch==3)
        {
            scanf("%ld %ld %lld",&x,&y,&v);
            update3(1,0,N-1,x-1,y-1,v);


        }
        else if(ch==4)
        {
            scanf("%ld %ld",&x,&y);
            //printf("%lld %lld\n",tree[6],tree[7]);
            long long int sum=getSumUtil(0,N-1,x-1,y-1,1);
            printf("%lld\n",sum);
        }
    }
}
		return;
	}

	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
    lazy1[node][0]=1;
    lazy1[node][1]=0;
	tree[node] = (tree[node*2]+tree[node*2+1])%k;
	// Init root value
}
void update1(long node, long a, long b, long i, long j, long long int value) {

	if(lazy1[node][0] != 1||lazy1[node][1]!=0) { // This node needs to be updated
   		tree[node] =((lazy1[node][0]*tree[node])%k+lazy1[node][1])%k; // Update it

		if(a != b) {
			lazy1[2*node][0]=(lazy1[2*node][0]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]+(((((a+b)/2)-a+1)*lazy1[node][1])/(b-a+1))%k)%k;
			lazy1[2*node+1][0]=(lazy1[2*node+1][0]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]+(((b-((a+b)/2))*lazy1[node][1])/(b-a+1))%k)%k;
			// Mark child as lazy
		}

   		lazy1[node][0] = 1;
   		lazy1[node][1]=0; // Reset it
  	}

	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;

  	if(a >= i && b <= j) {
          //  printf("%ld %lld\n",node,tree[node]);
    // Segment is fully within range
        tree[node] =(tree[node]+((b-a+1)*value))%k;

		if(a != b) {
			lazy1[2*node][1]=(lazy1[2*node][1]+((((a+b)/2)-a+1)*value)%k)%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]+((b-((a+b)/2))*value)%k)%k;
			// Mark child as lazy
		}

    		return;
	}

	update1(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update1(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = (tree[node*2]+ tree[node*2+1])%k; // Updating root with max value
}
void update2(long node, long a, long b, long i, long j, long long int value) {

if(lazy1[node][0] != 1||lazy1[node][1]!=0) { // This node needs to be updated
   		tree[node] =((lazy1[node][0]*tree[node])%k+lazy1[node][1])%k; // Update it

		if(a != b) {
			lazy1[2*node][0]=(lazy1[2*node][0]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]+(((((a+b)/2)-a+1)*lazy1[node][1])/(b-a+1))%k)%k;
			lazy1[2*node+1][0]=(lazy1[2*node+1][0]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]+(((b-((a+b)/2))*lazy1[node][1])/(b-a+1))%k)%k;
			// Mark child as lazy
		}

   		lazy1[node][0] = 1;
   		lazy1[node][1]=0; // Reset it
  	}

	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;

  	if(a >= i && b <= j) { // Segment is fully within range
    		tree[node] =(tree[node]* value)%k;

		if(a != b) { // Not leaf node
			lazy1[node*2][0]=(lazy1[node*2][0]*value)%k;
			lazy1[node*2+1][0]=(lazy1[node*2+1][0]*value)%k;
			lazy1[node*2][1]=(lazy1[node*2][1]*value)%k;
			lazy1[node*2+1][1]=(lazy1[node*2+1][1]*value)%k;
		}

    		return;
	}

	update2(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update2(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = (tree[node*2]+ tree[node*2+1])%k; // Updating root with max value
}
void update3(long node, long a, long b, long i, long j, long long int value) {
if(lazy1[node][0] != 1||lazy1[node][1]!=0) { // This node needs to be updated
   		tree[node] =((lazy1[node][0]*tree[node])%k+lazy1[node][1])%k; // Update it

		if(a != b) {
			lazy1[2*node][0]=(lazy1[2*node][0]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]*lazy1[node][0])%k;
			lazy1[2*node][1]=(lazy1[2*node][1]+(((((a+b)/2)-a+1)*lazy1[node][1])/(b-a+1))%k)%k;
			lazy1[2*node+1][0]=(lazy1[2*node+1][0]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]*lazy1[node][0])%k;
			lazy1[2*node+1][1]=(lazy1[2*node+1][1]+(((b-((a+b)/2))*lazy1[node][1])/(b-a+1))%k)%k;
			// Mark child as lazy
		}

   		lazy1[node][0] = 1;
   		lazy1[node][1]=0; // Reset it
  	}

	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    	if(a >= i && b <= j) { // Segment is fully within range
    		tree[node] =((b-a+1)*value);

		if(a != b) { // Not leaf node
			lazy1[2*node][0]=0;
			lazy1[2*node][1]=(value*(((a+b)/2)-a+1))%k;
			lazy1[2*node+1][0]=0;
			lazy1[2*node+1][1]=(value*(b-((a+b)/2)))%k;
		}

    		return;
	}

	update3(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update3(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = (tree[node*2]+ tree[node*2+1])%k; // Updating root with max value
	}


long getMid(long s, long e) {  return s + (e -s)/2;  }
long long getSumUtil( long ss, long se, long qs, long qe, long index)
{
   if(lazy1[index][0] != 1||lazy1[index][1]!=0) {
       // printf("%lld %lld %ld\n",lazy1[index][0],lazy1[index][1],index);// This node needs to be updated
   		tree[index] =((lazy1[index][0]*tree[index])%k+lazy1[index][1])%k; // Update it

		if(ss != se) {
			lazy1[2*index][0]=(lazy1[2*index][0]*lazy1[index][0])%k;
			lazy1[2*index][1]=(lazy1[2*index][1]*lazy1[index][0])%k;
			lazy1[2*index][1]=(lazy1[2*index][1]+(((((ss+se)/2)-ss+1)*lazy1[index][1])/(se-ss+1))%k)%k;
			lazy1[2*index+1][0]=(lazy1[2*index+1][0]*lazy1[index][0])%k;
			lazy1[2*index+1][1]=(lazy1[2*index+1][1]*lazy1[index][0])%k;
			lazy1[2*index+1][1]=(lazy1[2*index+1][1]+(((se-((ss+se)/2))*lazy1[index][1])/(se-ss+1))%k)%k;
			// Mark child as lazy
		}

   		lazy1[index][0] = 1;
   		lazy1[index][1]=0; // Reset it
  	}
    // If segment of this node is a part of given range, then return the
    // sum of the segment
    if (qs <= ss && qe >= se)
        return tree[index];

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;

    // If a part of this segment overlaps with the given range
    long mid = getMid(ss, se);
    return (getSumUtil(ss, mid, qs, qe, 2*index) +
           getSumUtil(mid+1, se, qs, qe, 2*index+1))%k;
}
int main()
{
    long long int v;
    int ch;
    long N,Q;
    long i,j,x,y;
    scanf("%ld %ld",&N,&Q);
    for(long i=0;i<N;i++)
        scanf("%lld ",&arr[i]);
    build_tree(1,0,N-1);
    while(Q--)
    {
        scanf("%d ",&ch);
        if(ch==1)
        {
            scanf("%ld %ld %lld",&x,&y,&v);
            update1(1,0,N-1,x-1,y-1,v);


        }
        else if(ch==2)
        {
            scanf("%ld %ld %lld",&x,&y,&v);
            update2(1,0,N-1,x-1,y-1,v);


        }
        else if(ch==3)
        {
            scanf("%ld %ld %lld",&x,&y,&v);
            update3(1,0,N-1,x-1,y-1,v);


        }
        else if(ch==4)
        {
            scanf("%ld %ld",&x,&y);
            //printf("%lld %lld\n",tree[6],tree[7]);
            long long int sum=getSumUtil(0,N-1,x-1,y-1,1);
            printf("%lld\n",sum);
        }
    }
}
