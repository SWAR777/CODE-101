 #include <stdio.h>
 int main()
 {
    int number,reversed,remainder,original;
    printf("Enter a number here:");
    scanf("%d",&number);
    if(number<0){
    printf("Number entered is not positive");
    }
    original=number;
    while(number!=0){
        remainder=number%10;
        reversed=remainder*10+remainder;
        number/=10; 
    }
    if (original=reversed){
        printf("This number is a palindrome");
    }
    else 
    printf("This number is not a palindrome");
    return 0;
 }