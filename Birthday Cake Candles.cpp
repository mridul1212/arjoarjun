#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n;
    int c=0,ht=-1;
    for(int i=0;i<n;i++)
    {
        cin>>h;
        if(h>ht)
        {
            ht=h;
            c=1;
        }
        else if (h==ht)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
