#include <iostream>
using namespace std;
int main()
{
    string a,b,c;
    cout<<"Enter first string: \n";
    cin>>a;
    cout<<"Enter second string: \n";
    cin>>b;
    c=a;
    for(int i=0;i<b.length();i++)
    c+=b[i];
    cout<<"New string: "<<c;
}
