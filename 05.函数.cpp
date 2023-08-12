#include<iostream>
using namespace std;
// 函数声明
void swap(int num1,int num2);
void swapWithReference(int &num1,int &num2);
int main(){
    int num1=10;
    int num2=20;
    cout<<num1<<" "<<num2<<endl;
    // 值传递
    swap(num1,num2);
    cout<<num1<<" "<<num2<<endl;
    // 引用传递
    swapWithReference(num1,num2);
    cout<<num1<<" "<<num2<<endl;
}
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
