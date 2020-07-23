#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define mod 1000000007
pair<long,long> a ;
stack <pair<long,long> stck[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);

long t ,n,x,y,z,i,j,k , l,m,p,f,sm,r,ans,mini,star,sans;
char c1,c2 ;
slld(n) ;
slld(m) ;
FOR(i,n){

    slld(x) ;
    a.make_pair(x,i) ;
    stck.push_back(a) ;


}
while(m--){
    scanf("%c",&c1);
    scanf("%c %lld %c",&c1,&k,&c2) ;
    //printf("%c\n",c1) ;
    //printf("%c\n",c2) ;
    //printf("%ld\n",k) ;



if(c1=='='){
    mini=0 ;
    ans=0 ;
    star=0 ;
    sans=0 ;
    for(i=0;i<n;i++){
        if(a[i]==k){
                star++ ;
                sans=sans+(mini*(mini+1))/2 ;
                mini=0 ;
    }
        if(a[i]<k){
            mini++ ;
            star++ ;
        }
        if(a[i]>k){
            sans=sans+(mini*(mini+1))/2 ;
            ans+=(star*(star+1))/2 -sans ;
            star=0 ;
            mini=0 ;
        }

}
        sans=sans+((mini)*(mini+1))/2 ;
        ans=(star*(star+1))/2 -sans ;
        if(ans%2){
        cout<<c2 ;
    }
    else {
        if(c2=='D')
            cout<<"C" ;
        else
            cout<<"D" ;
    }
        //cout<<ans<<"\n";
}
else if(c1=='>')
{
    mini=0 ;
    ans= 0;
    for(i=0;i<n;i++)
    {
        if(a[i]>k){


            ans=ans+((mini)*(mini+1))/2 ;
            mini=0 ;
        }
        else {
            mini++ ;
        }
    }
    ans=ans+(mini*(mini+1))/2 ;
    ans=((n*(n+1))/2) -ans ;
    //cout<<ans<<"\n" ;
    if(ans%2){
        cout<<c2 ;
    }
    else {
        if(c2=='D')
            cout<<"C" ;
        else
            cout<<"D" ;
    }
}
else if(c1=='<')
{
    mini=0 ;
    ans= 0;
    for(i=0;i<n;i++){
        if(a[i]>=k){
            ans+=((mini)*(mini+1))/2 ;
            mini=0 ;

        }
        else {
            mini++ ;
        }
    }
    ans=ans+(mini*(mini+1))/2 ;
    if(ans%2){
        cout<<c2 ;
    }
    else {
        if(c2=='D')
            cout<<"C" ;
        else
            cout<<"D" ;
    }
    //cout<<ans<<"\n" ;
}

}
return 0 ;
}
