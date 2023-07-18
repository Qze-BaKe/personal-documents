#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i=2,a,j=0;
    cout<<"输入数字："<<endl;
    cin>>a;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<a<<" 不是质数"<<endl;
        }
    }
    if(j==0)    cout<<a<<" 是质数"<<endl;
    return 0;
}
