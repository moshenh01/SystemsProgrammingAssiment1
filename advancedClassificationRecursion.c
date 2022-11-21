//
// Created by Moshe Nahshon on 16/11/2022.
//
#include "NumClass.h"
#include <math.h>

int order(int x);
int recurs(int x, int sum, int order, int summ);

void numToArray(int x, int order);

void numToArra(int x, int order, int xarr[]);

int recursPal(int xarr[], int start, int end);

int isArmstrong(int x){
    int t = order(x);
    int summ = 0;
    int y = recurs(x,x,t,summ);
 return y;
}
int recurs(int x, int sum, int order, int summ) {
    if(x == 0 && summ == sum){
        return 1;
    }
    else if(x == 0){
        return 0;
    }
    return  recurs((x / 10),sum,order,summ = summ + pow((x % 10),order)) ;;
}
int order(int x) {
    int t = 0;
    int xt = x;
    while(xt != 0){
        t++;
        xt = xt / 10;
    }
    return t;
}
int isPalindrome(int x){
    int ord = order(x);
    int xarr [ord];
    numToArra(x, ord,xarr);
    int start = 0,end = ord -1;
    int y = recursPal(xarr,start,end);
    return y;
}

int recursPal(int xarr[], int start, int end) {
    if(start >= end){
        return 1;
    }
    else if(start < end && xarr[start] != xarr[end]){
        return 0;
    }

    return recursPal(xarr,++start,--end); ;
}

void numToArra(int x, int order, int xarr[]) {
    int xa = x;
    for(int i = order - 1;i >= 0;i--){
        xarr[i] = xa % 10;
        xa = xa / 10;
    }
}








