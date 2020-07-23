#include<stdio.h>
#include<math.h>
#define slld(x) scanf("%lld",&x)
int main(){
    long long t,type,bc,gc,i,b[100000],g[100000],c,l,m,k,w,c2 ;
    char s[100001] ;
    slld(t) ;
    while(t--){
            c=0 ;
            l=m=0;
        scanf("%lld",&type);
            scanf("%s",s) ;
            bc=gc=0 ;
            b[0]=g[0]=0 ;
            if(s[0]=='B'){
                bc++ ;
                b[0]=0 ;
                l=1;
            }
            else{
                gc++ ;
                g[0]=0 ;
                m=1 ;
            }
        for(i=1;s[i]!='\0';i++){
            b[i]=g[i]=0 ;
            if(s[i]=='B'){
                    b[l]=i ;
                    l++ ;
                    //g[i]=g[i-1] ;
                bc++ ;
            }
            else
            {
                //b[i]=b[i-1] ;
                g[m]=i ;
                gc++ ;
                m++ ;
            }
        }
        /*for(i=0;i<l;i++){
            printf("%lld  ",b[i]) ;
        }
        printf("\n") ;
        for(i=0;i<m;i++){
            printf("%lld  ",g[i]) ;
        }
        printf("\n") ; */
        if(abs(bc-gc)>=2){
            printf("-1\n") ;
            continue ;
        }
        else{
            if(type==0){
                if(bc>gc){
                    for(i=0;s[i]!='\0';i++){
                        if(i%2==0&&s[i]!='B')
                            c++ ;
                        else if(i%2!=0&&s[i]!='G')
                            c++ ;
                    }
                }
                else if(gc>bc){
                    for(i=0;s[i]!='\0';i++){
                        if(i%2==0&&s[i]!='G')
                            c++ ;
                        else if(i%2!=0&&s[i]!='B')
                            c++ ;
                    }
                }
                else {
                        if(s[0]=='G'){
                         for(i=0;s[i]!='\0';i++){
                        if(i%2==0&&s[i]!='G')
                            c++ ;
                        else if(i%2!=0&&s[i]!='B')
                            c++ ;
                    }
                        }
                        else{
                     for(i=0;s[i]!='\0';i++){
                        if(i%2==0&&s[i]!='B')
                            c++ ;
                        else if(i%2!=0&&s[i]!='G')
                            c++ ;
                    }
                        }

                }
                c=c/2;
            }
            else if(type==1){
                    c=0 ;
                    k=0;
                    w=0;
                    if(bc>gc){
                for(i=0;s[i]!='\0';i++){
                        if(i%2==0&&s[i]=='B'){
                           k++ ;
                        }
                        else
                        if(i%2==0&&s[i]!='B'){
                            c=c+abs(b[k]-g[k]) ;
                        }
                       /* else
                        if(i%2!=0&&s[i]=='G'){
                            w++ ;
                        }
                        else
                        if(i%2!=0&&s[i]!='G'){
                            c=c+abs(b[w]-g[w]) ;
                        } */

                }
                c=c/2 ;

                    }
                     else if(gc>bc){
                            c=0;
                     k=0;
                     w=0;
                         for(i=0;s[i]!='\0';i++){
                        if(i%2==0&&s[i]=='G'){
                           k++ ;
                        }
                        else
                        if(i%2==0&&s[i]!='G'){
                            c=c+abs(b[k]-g[k]) ;
                        }
                        else
                        if(i%2!=0&&s[i]=='B'){
                            w++ ;
                        }
                        else
                        if(i%2!=0&&s[i]!='B'){
                            c=c+abs(b[w]-g[w]) ;
                        }

                }
                c=c/2 ;
                    }
                    else{
                        c2=0 ;
                        c=0;
                        k=0;

                       for(i=0;s[i]!='\0';i++){
                        if(i%2==0&&s[i]=='G'){
                           k++ ;
                        }
                        else
                        if(i%2==0&&s[i]!='G'){
                            c=c+abs(b[k]-g[k]) ;
                        }
                        else
                        if(i%2!=0&&s[i]=='B'){
                            w++ ;
                        }
                        else
                        if(i%2!=0&&s[i]!='B'){
                            c=c+abs(b[w]-g[w]) ;
                        }

                }
                k=0;
                w=0 ;
                for(i=0;s[i]!='\0';i++){
                        if(i%2==0&&s[i]=='B'){
                           k++ ;
                        }
                        else
                        if(i%2==0&&s[i]!='B'){
                            c2=c2+abs(b[k]-g[k]) ;
                        }
                        else
                        if(i%2!=0&&s[i]=='G'){
                            w++ ;
                        }
                        else
                        if(i%2!=0&&s[i]!='G'){
                            c2=c2+abs(b[w]-g[w]) ;
                        }

                }
                if(c2<c)
                    c=c2 ;
                c=c/2 ;
                    }
            }
        }

        printf("%lld\n",c);
    }
return 0 ;}
