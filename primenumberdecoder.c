#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
long long int k,i,j,l;
printf("Please give the multiple of two primenumbers:\n");
scanf("%lld",&k);
 clock_t start = clock();
for(i=2;i<=k;i++){
    if(i!=2 && i%2==0){
        continue;
    }else{
        j=k%i;
        if(j==0){
            l=k/i;
            printf("The numbers are %lld & %lld.",i,l);
            break;
        }
    }
}
   clock_t end = clock();
    
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_taken);
return 0;
}