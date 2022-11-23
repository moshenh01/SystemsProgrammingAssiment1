// this is main aa
#include "NumClass.h"

int main() {
    int start,end;
    
    while((scanf("%d  %d",&start,&end) != 2));
    if( (start > 0) && (end > 0)){
        printf("The Armstrong numbers are:");
        
        for(int i = start;i < end;i++){
            if(isArmstrong(i) == 1){
            printf(" %d", i);
            } 
        }
        printf("\nThe Palindromes are:");

        for(int i = start;i < end;i++){
            if(isPalindrome(i) == 1){
            printf(" %d",i);
            }
        }
            printf("\nThe Prime numbers are:");
        for(int i = start;i < end;i++) {
            if(isPrime(i) == 1){
            printf(" %d",i);
            }
        }
            printf("\nThe Strong numbers are:");
            for (int i = start; i < end; i++) {
                if(isStrong(i) == 1){
                printf(" %d",i);
                }
            }
           printf("\n");
        }
    return 0;
}

