#include<stdio.h>
#include<gmp.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
     srand(time(NULL)*getpid());
     int P,G;
     long long int a=rand()%99999;
    long long int b=rand()%99999;
     mpz_t G1,P1,pr1,pr2,total,pk1,pk2,sk1,sk2;
     mpz_init(G1);
     mpz_init(P1);
     mpz_init(pr1);
     mpz_init(pr2);
     mpz_init(total);
     mpz_init(pk1);
     mpz_init(pk2);  
     mpz_init(sk1);
     mpz_init(sk2);
    printf("We are going to calculate the shared secret value using deffiehellman key exchange algorithm............\n");
    printf("Please enter the prime number-P and prime number generator-G:\n");
    scanf("%d%d",&P,&G);
    //This is the codes that generates the public key for the client side
    printf("----------------Client side Calculation---------------------\n\n");
    printf("Let the private number of client be %d.\n",a);
    sleep(5);
    mpz_set_ui(G1,G);
    mpz_set_ui(P1,P);
    mpz_set_ui(pr1,a);
    mpz_pow_ui(total,G1,mpz_get_ui(pr1));
    mpz_mod(pk1,total,P1);
   printf("Client side public key:  ");
   sleep(5);
   mpz_out_str(stdout,10,pk1);
    printf("\n");

    //This is the codes that generates the public key for the server side
    printf("----------------Server side Calculation---------------------\n\n");
    printf("Let the private number of Server be %d.\n",b);
    mpz_set_ui(pr2,b);
    mpz_pow_ui(total,G1,mpz_get_ui(pr2));
    mpz_mod(pk2,total,P1);
   printf("server side public key:  ");
   sleep(5);
   mpz_out_str(stdout,10,pk2);
    printf("\n");
    //This portion of code calculates the shared key 
    printf("Key exchanged.........\n");
    sleep(5);
    // sleep(5);
    printf("-----------------Client side shared key calculation--------------------\n\n");
    printf("The public key of server side is :");
    sleep(5);
    mpz_out_str(stdout,10,pk2);
    printf("\n");
    mpz_pow_ui(total,pk2,mpz_get_ui(pr1));
    mpz_mod(sk1,total,P1);
    printf("The shared key generated is : ");
    sleep(5);
    mpz_out_str(stdout,10,sk1);
    printf("\n");

     printf("-----------------Server side shared key calculation--------------------\n\n");
    printf("The public key of client side is :");
    sleep(5);
    mpz_out_str(stdout,10,pk1);
    printf("\n");
    mpz_pow_ui(total,pk1,mpz_get_ui(pr2));
    mpz_mod(sk2,total,P1);
    printf("The shared key generated is : ");
    sleep(5);
    mpz_out_str(stdout,10,sk2);
    printf("\n");
    if(mpz_cmp(sk1,sk2)==0)
    {
        printf("Calculation is successful.......");
        sleep(5);
        exit(0);
    }else{
        printf("Error in the code.........");
        sleep(5);
        exit(0);
    }
    return 0;

}