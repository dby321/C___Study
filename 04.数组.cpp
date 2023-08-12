//
// Created by 董滨雨 on 2023/8/10.
//
#include<iostream>
using namespace std;
int main(){
    int score[10]={1,2,3};
    int score1[]={1,2,3};
    cout<<score<<" "<<score[0]<<endl;
    // 打印数组地址
    cout<<&score[0]<<endl;
    int arr[][2]={1,2,3,4,5,6};
    cout<<sizeof arr<<endl;
    cout<<sizeof(arr)<<endl;
}
