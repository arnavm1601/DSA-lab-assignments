#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main() {
    int n=0;
    int arr[100];
    int temp=0;
    cout<<"Enter size of array => ";
    cin>>n;
    cout<<"Enter elements of array => \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Before Reversel.\n";
        print(arr,n);
        for(int i=0;i<n/2;i++){
            arr[i]=arr[i]+arr[n-i-1];
            arr[n-i-1]=arr[i]-arr[n-i-1];
            arr[i]=arr[i]-arr[n-i-1];
        }
        cout<<"\nAfter Reversel.\n";
        print(arr,n);
        cout<<"\n";
    return 0;
}