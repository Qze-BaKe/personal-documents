#include<iostream>
using namespace std;
bool zhishu(int a)          //在函数库中存在
{
    int i;
    bool j=true;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            j=false;
            break;
        }
    } 
    return j;
}
int main()
{
    int i;
    bool j;
    for(i=2;i<=100;i++)
    {
        j=zhishu(i);
        if(j==true) cout<<i<<" ";
    }
    return 0;
}
