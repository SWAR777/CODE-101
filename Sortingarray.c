#include <stdio.h>
int main(){
    int n,arr[5];
    printf("Enter 5 elements:");
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    int i,j,temp;
    for(i=0;i<5-1;i++){
        for(j=0;j<n-5-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }   
    }
    printf("Sorted array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); 
    } 
    return 0;
}