#include<iostream>
using namespace std;
int main()
{
    int n,a[100],b=0,s=0,d=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            s++;
        }
        else if(a[i]%2!=0)
        {
            b++;
        }
    }
    if(b%2!=0)
    {
        cout<<b<<endl;
    }
    else
        cout<<s<<endl;
    return 0;
}
