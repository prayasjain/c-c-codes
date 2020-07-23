long long power(long long x, long long p , long long m){
    if(p==1)
        return x%m ;
    if(p==0)
        return 1 ;
    long long temp= power(x,p/2,m) ;
    if(p%2)
        return (temp*temp*x)%m;
    return (temp*temp)%m;

}

