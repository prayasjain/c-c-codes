#include<stdio.h>
#include <string.h>

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
long long u[100001]={0} ,r ;
void markMultiples(bool arr[], long long a, long long n)
{
    long long i = 2, num;
    while ( (num = i*a) <= n)
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}

// A function to print all prime numbers smaller than n
void SieveOfEratosthenes(long long n)
{
    r=0 ;
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
        bool arr[n];
        //memset(arr, 0, sizeof(arr));

        /* Following property is maintained in the below for loop
           arr[i] == 0 means i + 1 is prime
           arr[i] == 1 means i + 1 is not prime */
        for (long long i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples

                u[r]=i+1 ;
                r++ ;
                markMultiples(arr, i+1, n);
            }
        }
    }
}

// Driver Program to test above function



int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p ;
slld(t) ;
while(t--){
        slld(n) ;
        if(n%2!=0)
        {

            printf("0\n") ;
            continue ;
        }
        if(n==2)
        {

            printf("1\n") ;
            continue ;
        }
            SieveOfEratosthenes(n/2) ;

        n=n/2 ;
        m=0 ;

        p=0 ;
        k=1 ;
        for(i=0;i<r;i++){


     p=0 ;
     while(n%u[i]==0){

                p++ ;
                n=n/u[i] ;

     }
     k=k*(p+1);

        }
               printf("%lld\n",k);


}
return 0 ;
}

