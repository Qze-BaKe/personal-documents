#include<iostream>
#include<cstdio>
using namespace std;
int a[100];
char b[100];
int main()
{
    cout<<"2"<<endl;
    int i=0;
    while(scanf("%d",&a[i])==1) i++;
    for(int j=0;j<=i;j++)
    {
        switch(a[j])
        {
            case 1:b[j]='c';break;
            case 2:b[j]='d';break;
            case 3:b[j]='e';break;
            case 4:b[j]='f';break;
            case 5:b[j]='g';break;
            case 6:b[j]='h';break;
            case 7:b[j]='i';break;
            case 8:b[j]='j';break;
            case 9:b[j]='k';break;
            case 10:b[j]='l';break;
            case 11:b[j]='m';break;
            case 12:b[j]='n';break;
            case 13:b[j]='o';break;
            case 14:b[j]='p';break;
            case 15:b[j]='q';break;
            case 16:b[j]='r';break;
            case 17:b[j]='s';break;
            case 18:b[j]='t';break;
            case 19:b[j]='u';break;
            case 20:b[j]='v';break;
            case 21:b[j]='w';break;
            case 22:b[j]='x';break;
            case 23:b[j]='y';break;
            case 24:b[j]='z';break;
            case 25:b[j]='a';break;
            case 26:b[j]='b';break;
            case 0:b[j]=' ';break;
            default:cout<<"存在不可识别数字"<<endl;
        }
    }
    for(int j=0;j<=i;j++)
        cout<<b[j];
    cout<<endl;
    return 0;
}
