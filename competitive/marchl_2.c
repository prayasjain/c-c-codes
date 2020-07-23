#include<stdio.h>
#define slld(x) scanf("%lld",&x)
long long a0 [100001] ;
long long a1 [100001] ;
int main(){
    long long int n,k,q,l,r,t,i,c,j,p,d ;
    char s[100001],y ;
    slld(t) ;
    while(t--){
        slld(n) ;
        slld(k) ;
        slld(q) ;
       // scanf("%c",&y);
       scanf("%s",s) ;
       //printf("%s",s);

        for(i=0;i<n;i++){
            a0[i]=a1[i]=0 ;

            if(i==0){
                if(s[i]=='0')
                    a0[0]=1;
                else
                    a1[0]=1;
            }
            else if(s[i]=='1'){
                a1[i]=a1[i-1]+1 ;
                a0[i]=a0[i-1];
            }
            else{
                a0[i]=a0[i-1]+1 ;
                a1[i]=a1[i-1];

            }

        }
       // for(i=0;i<n;i++){
         //   printf("%lld %lld\n",a0[i],a1[i]);
        //}
        //for(i=0;i<n;i++){
        //printf("%lld %lld \n",a0[i],a1[i]) ;
        //}

        while(q--){
                if(k==0)
                    continue ;
                c=0 ;
            slld(l) ;
            slld(r) ;
            p=l-1 ;
            d=1 ;

            for(i=l-1;i<r;i++){
                //for(j=i;j<r;j++){
                  //  if(a1[j]-a1[i-1]<=k&&a0[j]-a0[i-1]<=k){
                    //    c++;
                    //}
                    if(a1[i]-a1[p-1]<=k&&a0[i]-a0[p-1]<=k){
                        c=c+(d++) ;
                    }
                    else{
                            while((!(a1[i]-a1[p-1]<=k)||!(a0[i]-a0[p-1]<=k))&&d>=1&&p<=i){

                                p++;
                                d--;
//printf("%lld\n",d) ;

                            }
                            c=c+(d++);
                    }

                }

            printf("%lld\n",c) ;
           // printf("%lld\n",(((r-l+1)*(r-l+2))/2)-c);
        }
    }
return 0 ;}
