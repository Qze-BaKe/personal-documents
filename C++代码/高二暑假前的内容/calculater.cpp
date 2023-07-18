#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double a,c,d;
    char b;
    cout<<"输入运算："<<endl;
    cin>>a>>b>>c;
    switch(b)
    {
        case '+':d=a+c;break;
        case '-':d=a-c;break;
        case '*':d=a*c;break;
        case '/':if(c) d=a/c;
                    else {printf("除数不为0！\n");
                    return 0;}
        default :printf("请输入正确的运算符\n");return 0;
    }
    cout<<"运算结束："<<a<<b<<c<<"="<<d<<endl;
    printf("程序结束\n");
    return 0;
}
