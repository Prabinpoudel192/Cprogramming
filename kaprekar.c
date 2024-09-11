#include<stdio.h>
#include<math.h>
int main(){
int a,i,j,y,z,k,temp,diff,m;
int b[4];
    printf("Please enter the four digit number:\n");
    scanf("%d",&a);
    do{
     i=0;
    while(a>0){
       
        b[i]=a%10;
        a=a/10;
        i++;
    } 
    while(i<4){
        i++;
        b[i-1]=0;
    }   
  for(j = 0; j < 4; j++) {
            for(k = j + 1; k < 4; k++) {
                if(b[j] > b[k]) {
                    temp = b[j];
                    b[j] = b[k];
                    b[k] = temp;
                }
            }
        }

        y=1000*b[3]+100*b[2]+10*b[1]+b[0];
        z=1000*b[0]+100*b[1]+10*b[2]+b[3];
        diff=y-z;
        printf("%d - %d = %d\n",y,z,diff);
        a=diff;
    }while(diff!=6174 && diff!=0);
    

return 0;
}
    