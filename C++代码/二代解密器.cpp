#include<iostream>
using namespace std;
char a[10000],key[10];
int ma,po,st,bh;
int main()
{
    cout<<"start"<<endl;
    for(int i=0;i<=10000;i++)
    {
        a[i]=getchar();
        if(a[i]=='\n')
        {
            ma=i;
            break;
        }
    }
    cout<<"read finished"<<endl;
    for(int i=0;i<=ma;i++)
    {
        if(a[i]=='n') if(a[i+1]=='u')  if(a[i+2]=='j')  if(a[i+3]=='b')  po=i+4;
    }
    for(int i=po;i<=ma;i++)
    {
        if(a[i]=='K')
        {
            st=i+1;
            break;
        }
        key[i-po]=a[i];
    }
    for(int i=po;i<=st;i++)
        cout<<key[i];
    return 0;
}