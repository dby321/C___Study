//
// Created by 董滨雨 on 2023/8/10.
//
#include<iostream>
using namespace std;
struct Student{
    std::string name;
    int age;
    int score;
};
int main(){
    // 结构体默认有一个全参构造函数和一个无参构造函数
    struct Student student={"默认",16,300};
    student.name="董滨雨";
    student.age=18;
    student.score=100;
    cout<<student.name+" "<<student.age<<" "<<student.score<<" "<<endl;
    // &是一个指针常量
}

