#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,l,s;                   //海伦公式      
    cout<<"come on the way~"<<endl;
    cin>>a>>b>>c;
    l=(a+b+c)/2;
    s=sqrt(l*(l-a)*(l-b)*(l-c));
    cout<<s<<endl;
    return 0;
}
