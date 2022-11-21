
//
// Created by Moshe Nahshon on 15/11/2022.
//

#include "NumClass.h"
#include <math.h>
int isArmstrong(int x){
   //t = the number of unit in x.
   int t = 0;
   int xt = x;
   while(xt != 0){
       t++;
       xt = xt / 10;
   }
   int xRep = x;
   int sum = 0;
   while (xRep != 0){
       int un = xRep % 10;
       double a = un,b = t;
       double pow1 = pow(a,b);
       sum = sum + (int)pow1;
       xRep = xRep / 10;
   }
   if (sum == x)
       return 1;
   else
       return 0;
}
int isPalindrome(int x){
   int start = 0;
   // number lenth and put into array.
   int t = 0;
   int xt = x;
   while(xt != 0){
       t++;
       xt = xt / 10;
   }
   // end.
   int end = t - 1;
   //fill array
   int xarr[t];
   int xa = x;
   for(int i = t-1;i >= 0;i--){
       xarr[i] = xa % 10;
       xa = xa / 10;
   }
   //end

   while(start < end){
       if(xarr[start] != xarr[end]){
           return 0;
       }
       else {
           start++;
           end--;
       }
   }
   return 1;
}
