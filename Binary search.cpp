#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter sorted array: \n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Array\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    int a;
    cout<<"\nEnter element you want to search: ";
    cin>>a;
    int flag=0;
    int l=0,r=n-1;
    while(l<=r)
    {   int m=(l+r)/2;
        if(a<arr[m]){
            r=m-1;
        }
        else if(a>arr[m]){
            l=m+1;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag)
    cout<<"Element found.";
    else
    cout<<"Element not found";
    return 0;
}