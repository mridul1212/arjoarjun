#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"Ready"<<endl;
    while(getline(cin,a))
    {
        if((a[0]==' ')&&(a[1]==' '))
            break;


        if((a[0]=='p')&&(a[1]=='q')||(a[0]=='b')&&(a[1]=='d')||(a[0]=='d')&&(a[1]=='b')||(a[0]=='q')&&(a[1]=='p'))
            cout<<"Mirrored pair"<<endl;
        else
            cout<<"Ordinary pair"<<endl;

    }
     return 0;
}
