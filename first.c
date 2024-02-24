//write a programme to print a smallest number
#include<stdio.h>
int main(){
    int no1,no2,min;

    printf("enter the no1:- ");
    scanf("%d",&no1);

    printf("enter the no2:-  ");
    scanf("%d",&no2);

    if(no1<no2){
        min =no1;
    }
    else{
        min = no2;
    }

    printf("the smallest no is =%d",min);
}