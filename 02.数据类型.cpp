#include <iostream>
// 命名空间，类似java静态导入
//using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    int num1=10;
    long num2=10;
    long long num3=10;
    std::cout<<num1<<num2<<num3<<std::endl;
    // sizeof 查看占用字节数
    std::cout<<sizeof num1<<std::endl;
    float num4=1.0435345345f;
    double num5=3.1415;
    std::cout<<num4<<num5<<std::endl;
    char ch='a';
    std::cout<<ch<<std::endl;
    // 制表符号
    std::cout<<"警告\taaa\t"<<std::endl;
    std::cout<<"hahah\tsdfsdfsdf\t"<<std::endl;
    std::cout<<"\\"<<std::endl;
    char str[]="hello world";
    std::string str2="hello c++";
    std::cout<<str<<" "<<str2<<std::endl;
    bool flag=false;
    std::cout<<flag<<std::endl;
    // 非0代表真
    std::cin>>flag;
    std::cout<<flag<<std::endl;
    return 0;
}
