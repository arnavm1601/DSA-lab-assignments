#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[100];

    cout<<"Enter "<<n-1<<" elements: ";
    for(int i=0;i<n-1;i++)
    cin>>arr[i];

    cout<<"Array\n";
    for(int i=0;i<n-1;i++)
    cout<<arr[i]<<" ";

    int l=0,r=n-2;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==m+1)
            l=m+1;
        else 
            r=m-1;
    }   
    
    cout << "\nMissing element: " << l+1;
}