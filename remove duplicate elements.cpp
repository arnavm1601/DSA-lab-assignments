#include <iostream>
using namespace std;
int main() {
    int n=0;
    int arr[100];
    cout<<"Enter size of array => ";
    cin>>n;
    cout<<"Enter elements of array => \n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Before deletion.\n";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
    for(int k=j;k<n-1;k++){
    arr[k]=arr[k+1];
    }
    n--;
    j--;
    }
    }
    }
    cout<<"\nArray after deletion.\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}