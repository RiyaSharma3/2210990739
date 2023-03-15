#include<stdio.h>

int main(){
    int n, nohun, nofifty, noten, nofive, notwo, noone, total;
    printf("Enter the amount: ");
    scanf("%d", &n);

    nohun= n/100;
    n= n%100;
    nofifty= n/50;
    n= n%50;
    noten= n/10;
    n= n%10;
    nofive= n/5;
    n= n%5;
    notwo= n/2;
    n= n%2;
    noone= n/1;
    n= n%1;
    total= nohun + nofifty + noten + nofive + notwo + noone;
    printf("Smallest number of notes= %d", total);
    
    return 0;
}