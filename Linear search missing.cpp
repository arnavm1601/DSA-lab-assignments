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
    for(int i=0;i<n-1;i++)
        if(i+1!=arr[i]){
            cout<<"\nMissing element found: "<<i+1;
           return 0;
        }
     cout << "Missing element: " << n;
    return 0;
}