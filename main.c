
#include "NumClass.h"

int main() {
    int start,end;
    do{
        printf("Enter two integers");
    }
    while((scanf("%d  %d",&start,&end) != 2));
    if( (start > 0) && (end > 0)){
        printf("The Armstrong numbers are: ");
        int count1 = 0;
        for(int i = start;i < end;i++){
            if(isArmstrong(i) == 1){
            printf("%d ", i);
            count1++;
            if(count1 % 26 == 0)
                printf("\n");
            }
        }
        printf("\nThe Palindromes are: ");
        int count2 = 0;
        for(int i = start;i < end;i++){
            if(isPalindrome(i) == 1){
            printf("%d ",i);
            count2++;
            if(count2 % 26 == 0)
                printf("\n");
            }
        }
            printf("\nThe Prime numbers are: ");
        int count3 = 0;
        for(int i = start;i < end;i++) {
            if(isPrime(i) == 1){
            printf("%d ",i);
            count3++;
            if (count3 % 26 == 0)
                printf("\n");
                }
            }
            printf("\nThe Strong numbers are: ");
            int count4 = 0;
            for (int i = start; i < end; i++) {
                if(isStrong(i) == 1){
                printf("%d ",i);
                count4++;
                if (count4 % 26 == 0)
                    printf("\n");
                }
            }
        }
    return 0;
}
