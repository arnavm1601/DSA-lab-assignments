#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main() {
    int n=0;
    int arr[100];
    cout<<"Enter size of array => ";
    cin>>n;
    cout<<"Enter elements of array => \n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    print(arr,n);
    int a;
    int temp=0;
    while(true){
    cout<<"\nTo rotate left press 1.\n";
    cout<<"To rotate right press 2.\n";
    cout<<"To print press 3.\n";    
    cout<<"To exit press 4.\n";
    cin>>a;
    switch(a){
    case 1:
    int k;
    cout<<"How many times do you want to rotate the array ?\n";
    cin>>k;
    while(k>0){
    temp=arr[0];
    for(int i=0;i<n-1;i++)
    arr[i]=arr[i+1];
    arr[n-1]=temp;
    k--;
    }
    print(arr,n);
    break;
    case 2:
    cout<<"How many times do you want to rotate the array ?\n";
    cin>>k;
    while(k>0){
    temp = arr[n-1];
    for(int i=n-1;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=temp;
    k--;
    }
    print(arr,n);
    break;
    case 3:
    print(arr,n);
    break;
    case 4:
    return 0;
    default:
    cout<<"Invalid choice.\n";
    }
    }
    return 0;
}