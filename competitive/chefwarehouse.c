#include<stdio.h>

#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int main(){

    long long t ,c,r,g,b,i,rf,gf,bf ;
    char s[100001] ;
    slld(t) ;
    while(t--){
        ss(s) ;
        c=0 ;
        r=g=b=rf=gf=bf=-1 ;
        //printf("%lld %lld %lld %lld %lld %lld %lld\n",c,rf,r,gf,g,bf,b) ;
        if(s[0]=='r')
            r=rf=0 ;
        if(s[0]=='g')
            g=gf=0 ;
        if(s[0]=='b')
            b=bf=0 ;
          //  printf("%lld %lld %lld %lld %lld %lld %lld\n",c,rf,r,gf,g,bf,b) ;
        for(i=1;s[i]!='\0';i++){
            if(s[i]=='r'){
                    if(rf!=-1){
                          //  printf("inc1 %lld\n",i) ;
                        c=c+i-r-1;
                        r++;
                        if(gf>=0){
                            gf++;
                            g++;
                            }
                             if(bf>=0){
                            bf++;
                            b++;
                            }
                    }
                    else {
                        rf++;
                        r++;
                        if(gf>=0){
                            gf++;
                            g++;
                            }
                             if(bf>=0){
                            bf++;
                            b++;
                            }
                   // printf("inc2 %lld\n",i) ;
                            c=c+(i) ;

                    }


            }
             if(s[i]=='g'){
                if(gf!=-1){
                        c=c+i-g-1;
                       // printf("inc2 %lld\n",i) ;
                        g++;
                        if(bf>=0){
                            bf++;
                            b++;
                            }


                }

                else if(rf!=-1){
                    gf=g=r+1;
                    c=c+i-r-1;
                    //printf("inc3 %lld\n",i) ;
                     if(bf>=0){
                            bf++;
                            b++;
                            }
                }
                else{
                    gf=g=0 ;
                    c=c+i ;
                    //printf("inc4 %lld\n",i) ;
                     if(bf>=0){
                            bf++;
                            b++;
                            }}
            }
            if(s[i]=='b'){
                     if(bf!=-1){

                        b++ ;

                     }
                     else if(gf!=-1){
                        bf=b=g+1 ;
                     }
                     else{
                            bf=b=r+1 ;
                     }


            }//printf("%lld %lld %lld %lld %lld %lld %lld\n",c,rf,r,gf,g,bf,b) ;
        }
        printf("%lld\n",c) ;
    }
    return 0 ;
 }

