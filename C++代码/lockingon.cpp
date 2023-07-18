#include<iostream>
using namespace std;
char a[100];
int b[100];
int main()
{
    cout<<"1"<<endl;                            //初始化
    int i=1;
    a[0]='x';
    while(a[i-1]!='/')
    {                                           //输入模块
        a[i]=getchar();
        i++;
    }
    for(int j=1;j<i;j++)                        //转换模块
    {
        switch(a[j])
        {
            case 'c':b[j]=1;break;
            case 'd':b[j]=2;break;
            case 'e':b[j]=3;break;
            case 'f':b[j]=4;break;
            case 'g':b[j]=5;break;
            case 'h':b[j]=6;break;
            case 'i':b[j]=7;break;
            case 'j':b[j]=8;break;
            case 'k':b[j]=9;break;
            case 'l':b[j]=10;break;
            case 'm':b[j]=11;break;
            case 'n':b[j]=12;break;
            case 'o':b[j]=13;break;
            case 'p':b[j]=14;break;
            case 'q':b[j]=15;break;
            case 'r':b[j]=16;break;
            case 's':b[j]=17;break;
            case 't':b[j]=18;break;
            case 'u':b[j]=19;break;
            case 'v':b[j]=20;break;
            case 'w':b[j]=21;break;
            case 'x':b[j]=22;break;
            case 'y':b[j]=23;break;
            case 'z':b[j]=24;break;
            case 'a':b[j]=25;break;
            case 'b':b[j]=26;break;
            case ' ':b[j]=0;break;
            default:cout<<"字符中含有不可识别物！"<<endl;
        }
    }
    for(int j=1;j<i;j++)                        //输出模块
        cout<<b[j]<<" ";
    cout<<endl;
    return 0;
}