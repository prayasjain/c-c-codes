// Invariant: A[l] <= key and A[r] > key
// Boundary: |r - l| = 1
// Input: A[l .... r-1]
int BinarySearch(int A[], int l, int r, int key)
{
    int m;

    while( r - l > 1 )
    {
        m = l + (r-l)/2;

        if( A[m] <= key )
            l = m;
        else
            r = m;
    }

    if( A[l] == key )
        return l;
    else
        return -1;
}
//////////////////////////////////////////////


// largest value <= key
// Invariant: A[l] <= key and A[r] > key
// Boundary: |r - l| = 1
// Input: A[l .... r-1]
// Precondition: A[l] <= key <= A[r]
int Floor(int A[], int l, int r, int key)
{
    int m;

    while( r - l > 1 )
    {
        m = l + (r - l)/2;

        if( A[m] <= key )
            l = m;
        else
            r = m;
    }

    return A[l];
}

// Initial call
int Floor(int A[], int size, int key)
{
    // Add error checking if key < A[0]
    if( key < A[0] )
        return -1;

    // Observe boundaries
    return Floor(A, 0, size, key);
}





//Given below is implementation of algorithm. Can you come up with different implementation?

int BinarySearchIndexOfMinimumRotatedArray(int A[], int l, int r)
{
    // extreme condition, size zero or size two
    int m;

    // Precondition: A[l] > A[r]
    if( A[l] <= A[r] )
        return l;

    while( l <= r )
    {
        // Termination condition (l will eventually falls on r, and r always
        // point minimum possible value)
        if( l == r )
            return l;

        m = l + (r-l)/2; // 'm' can fall in first pulse,
                        // second pulse or exactly in the middle

        if( A[m] < A[r] )
            // min can't be in the range
            // (m < i <= r), we can exclude A[m+1 ... r]
            r = m;
        else
            // min must be in the range (m < i <= r),
            // we must search in A[m+1 ... r]
            l = m+1;
    }

    return -1;
}

int BinarySearchIndexOfMinimumRotatedArray(int A[], int size)
{
    return BinarySearchIndexOfMinimumRotatedArray(A, 0, size-1);
}

