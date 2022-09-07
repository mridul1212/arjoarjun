#include<iostream>
using namespace std;
int main()
{
    int n,m;
    string ar;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>ar;
        if(ar=="fechou")
            n++;
        else n--;
    }
    cout<<n<<endl;
    return 0;
}
