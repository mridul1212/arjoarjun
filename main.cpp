#include <iostream>

using namespace std;

int main()
{
    int t,y,d;
    cin>>t;
    while(t--)
    {
        cin>>d;
        if(d<2015)
        {
            y= 2015-d;
            cout<<y<<" D.C."<<endl;
        }
        else{
            y=d-2014;
            cout<<y<<" A.C."<<endl;
        }
    }
    return 0;
}
