//
// Created by 董滨雨 on 2023/8/10.
//
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* p=&a;
    // 解引用
    cout<<*p<<endl;
    cout<<p<<endl;
    *p=1000;
    cout<<p<<endl;
    //空指针 有点难调试
//    int* p2=NULL;
//    cout<<"-----"<<endl;
//    *p2=100;
//    cout<<"-----"<<endl;
//    cout<<*p2<<endl;
//    cout<<"-----"<<endl;
    // 野指针 我为什么要这样写
//    int* p3=(int *)0x1100;
//    cout<<*p3<<endl;
    // 常量指针 指针值不能修改，指针指向可以修改
    const int * p4=&a;
    // 指针常量 指针值可以修改，指针指向不能修改
    int * const p5=&a;
    // 都不可以改
    const int * const p6=&a;
    // 指针操作数组
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int * p7=arr;
    cout<<*p7<<endl;
    p7++;
    cout<<*p7<<endl;
}
