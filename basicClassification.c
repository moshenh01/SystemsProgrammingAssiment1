//
// Created by Moshe Nahshon on 15/11/2022.
//
#include "NumClass.h"

int factNum(int rep);

int isStrong(int x){
    int sum = 0;
    int xRep = x;
    while(xRep != 0){
        int xdig = xRep % 10;
        int y = factNum(xdig);
        xRep = xRep / 10;
        sum = sum + y;
    }
    if (sum == x)
        return 1;
    else
        return 0;
}

int factNum(int rep) {
    int n = 1;
    for(int i = 1;i <= rep;i++)
    {
        n = n * i;
    }
    return n;
}
int isPrime(int x){
    int count =0;
    for(int i = 2;i < x;i++) {
        if ((x % i) == 0) {
            count++;
        }
    }
        if(count > 0) {
            return 0;
        }
        else{
            return 1;
        }
}