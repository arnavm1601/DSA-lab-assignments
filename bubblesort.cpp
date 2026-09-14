#include <iostream>
using namespace std;
int main()
{
     int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter array: \n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Array\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    for(int j=0;j<n-1;j++)
        for(int i=0;i<n-1-j;i++)
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
        }
    cout<<"\nNew Array\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}