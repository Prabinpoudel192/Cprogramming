#include<stdio.h>
#include<gmp.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int a,b,P,G,i=0,j=0;
mpz_t P1,G1,pr1,pr2,pk1,pk2,total,sk1,sk2;
int p_random();
void pkcalc();
void skcalc();
int main(){
srand(time(NULL)*getpid());
int a,b,P,G;
a=p_random();
b=p_random();
printf("Lets assume we have two parties Client and Server...............\n\n");
printf("Now provide the Prime Number-P and General NUmber -G:\n");
scanf("%d%d",&P,&G);
// mpz variable initialization zone
mpz_init(P1);
mpz_init(G1);
mpz_init(pr1);
mpz_init(pr2);
mpz_init(pk1);
mpz_init(pk2);
mpz_init(total);
mpz_init(sk1);
mpz_init(sk2);
//mpz_variable value setting zone
mpz_set_ui(P1,P);
mpz_set_ui(G1,G);
mpz_set_ui(pr1,a);
mpz_set_ui(pr2,b);
pkcalc();
pkcalc();
skcalc();
skcalc();
system("clear");
gmp_printf("As provided:\nPrime Number-P:%Zd\nGeneral Number-G:%Zd\n",P1,G1);
printf("===========================================================================================================================================\n");
printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|Client Side.......|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|Server Side.......|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
printf("===========================================================================================================================================\n");
gmp_printf("Private Key:%Zd                                                                                               Private Key:%Zd           \n",pr1,pr2);
sleep(5);
gmp_printf("Public Key:%Zd                                                                                                Public Key:%Zd            \n\n",pk1,pk2);
sleep(5);
printf("============================================================================================================================================\n");
printf("|||||||||||||||||||||||||||||||||||||||||||||||||||Public key Exchange taking place........ ||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("============================================================================================================================================\n");
sleep(5);
printf("                                                                                                                                            \n");
sleep(5);
gmp_printf("public key recieved:%Zd                                                                                 Public key recieved:%Zd         \n",pk2,pk1);
sleep(5);
gmp_printf("The shared key calculated for Client side:%Zd                                     The shared key calculated for server side:%Zd         \n",sk1,sk2);
sleep(5);
printf("============================================================================================================================================\n");
printf("|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|Conclusion........|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|+|\n");
printf("============================================================================================================================================\n");
if(mpz_cmp(sk1,sk2)==0){
    printf("Since the shared key is equal for both sides the calculation was successful..........\n");
    sleep(5);
    exit(0);
}else if(mpz_cmp(sk1,sk2)!=0){
    printf("Since the two shared key arenot equal so there occured and error.....................\n");
    sleep(5);
    exit(0);
}
return 0;
}

int p_random(){
    int k;
    do{
        k=rand()%99999; 
           }while(k<1);
   return k;
}
void pkcalc(){
    i++;
    if(i==1){
    mpz_pow_ui(total,G1,mpz_get_ui(pr1));
    mpz_mod(pk1,total,P1);
}else if(i==2){
    mpz_pow_ui(total,G1,mpz_get_ui(pr2));
    mpz_mod(pk2,total,P1);
}else{
    printf("Some error has occured,We will fix the issue soon..........\n");
    sleep(10);
    exit(1);
}

}
void skcalc(){
    j++;
    if(j==1){
        mpz_pow_ui(total,pk2,mpz_get_ui(pr1));
        mpz_mod(sk1,total,P1);
    }else if(j==2){
        mpz_pow_ui(total,pk1,mpz_get_ui(pr2));
        mpz_mod(sk2,total,P1);
    }else{
        printf("Some error has occured,We will fix the issue soon..............\n");
        sleep(10);
        exit(0);
    }
}
