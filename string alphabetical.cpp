#include <iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter number of strings: \n";
    cin>>n;
    string arr[100];
    cout<<"Enter strings: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j]){
                string temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
    }
    cout<<"String in alphabetica order\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
