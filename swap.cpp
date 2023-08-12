//
// Created by 董滨雨 on 2023/8/10.
//
#include "swap.h"
void swap(int num1,int num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}
void swapWithReference(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}