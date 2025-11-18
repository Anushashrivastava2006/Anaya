#include<stdio.h>
void BubbleSort(int arr[5],int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }
}

int main(){
   int arr[5]={5,4,3,2,1};
        int n= sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    printf("sorted array is:\n");
            for(int i=0;i<n;i++){
                 printf("%d",arr[i]);
            }

return 0;

}
