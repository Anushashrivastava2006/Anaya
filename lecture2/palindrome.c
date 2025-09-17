#include<stdio.h>
int main(){
    int num=121;
    int original=121;
    int res=0;
    while(num!=0){
    
        int original=num%10;
        res=res*10+ original ;
        num= num/10;
        }
if(original== res){
    printf("palindrome");
}else{
    printf("not");
}

}