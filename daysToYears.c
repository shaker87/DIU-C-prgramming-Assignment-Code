#include<stdio.h>
int main(){
    int days, weeks, year;

    printf("Enter days");
    scanf("%d", &days);


    //calculation

    years = days / 365;
    weeks = (days % years) / 7;

    return 0;
}

