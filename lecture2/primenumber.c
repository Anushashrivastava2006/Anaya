#include<stdio.h>
int main(){
    int n=11 ;
    int isprime=1 ;
    if (n<=1){
        printf("not a prime number");
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
             break;
    }
}
    if( isprime){
        printf("not a prime number");
    }else{
        printf("is a prime number");
    }
    }
 