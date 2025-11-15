#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number here:");
    scanf("%d",&a);
    if(a<0){
        printf("Enter a positive number.") ;
        return 0;
    }
    if(a>0){
        int rem,original;
        original=a;
        while(a!=0){
            rem= a%10;
            a/=10;
            printf("%d",rem);
            if (a!=0){
                printf(",");
            }    
        }
    }
    return 0;    
}