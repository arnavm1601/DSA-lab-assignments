#include <iostream>
using namespace std;
int main()
{
    string a;
    cout<<"Enter string: \n";
    cin>>a;
    for(int i=a.length();i>=0;i--)
    cout<<a[i];
}
