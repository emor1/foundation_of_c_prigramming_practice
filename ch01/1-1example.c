#include<stdio.h>

#define STACKSIZE 10

int main(){
    int stack_items[STACKSIZE], stack_top=0,x;

    stack_items[stack_top++]=x;

    x=stack_items[--stack_top];
}