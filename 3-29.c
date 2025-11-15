#include <stdio.h>
int main(){
    int a;
    printf("Enter a number here:");
    scanf("%d",&a);
    if(a<0){
        return 0;
    }
    else if (a>0){
        if(a==1)
            printf("Not a Prime number");
        else{
            int n,b=1;
            for(n=2;n<a;n++){
                if(a%n==0){   
                    b=0;
                    break;
                }
            }
            if(b)
                printf("It is prime number");    
            else
                printf("Not a prime number");
         }    
    }
    return 0;
} 