#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
int main(){
    long long int P,G,a,b,c,d,e,f,g,h,i,j,k,l=1,m=1,n=1,o=1,p;
    int p1,p2;
    int aa;
 srand(time(NULL)*getpid());
  do{
  p1=rand()%9;
  p2=rand()%9;
  }while(p1==0 || p2==0);
 printf("values:%d and %d.\n",p1,p2);
  printf("Please enter the Primenumber-P and prime number generator-G:\n");
    scanf("%lld%lld",&P,&G);
    printf("This is the calculation of client side:\n");
    for(i=1;i<=p1;i++){
        l=l*G;
    }
    b=l%P;
    printf("The public key generated: %lld.\n",b);
    printf("This is the calculation of server side:\n");
    for(i=1;i<=p2;i++){
        m=m*G;
    }
    d=m%P;
    printf("The public key generated: %lld.\n",d);
    printf("Excnange of public key.  .   .\n");
    printf("Shared secret generation in progress:\n");
    printf("Client side calculation :\n");
    for(i=1;i<=p1;i++){
        n=n*d;
    }
    f=n%P;
    printf("Your shared secret is %lld.\n",f);
    printf("Server side calculation :\n");
    for(i=1;i<=p2;i++){
        o=o*b;
    }
    h=o%P;
    printf("Your shared secret is %lld.\n",h);
    
    if(f==h){
        printf("The calculation was successful and the value are %lld and %lld .\n",f,h);
    }else{
        printf("error.\n");
    }    
    return 0;
}
 