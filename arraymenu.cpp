#include <iostream>
using namespace std;
int main() {
int a;
int n=0;
int arr[100];
while(true){
cout<<"\nWhat action do you want to perform ?\n";
cout<<"To Create press 1\n";
cout<<"To Dsiplay press 2\n";
cout<<"To Insert press 3\n";
cout<<"To Delete press 4\n";
cout<<"To Linear Search press 5\n";
cout<<"TO Exit press 6\n";
cin>>a;

switch(a){
    case 1 :
    cout<<"Enter Size of array : \n";
    cin>>n;
    cout<<"Enter Elements in array : \n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    break;
    case 2:
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    break;
    case 3:
    int b,c;
    cout<<"Enter element you want to insert = \n";
    cin>>b;
    cout<<"Enter the index where you want to add the element = \n";
    cin>>c;
    if(c<0||c>=n){
    cout<<"Invalid index.\n";
    break;
    }
    cout<<"Element inserted.\n";
    for(int i=n;i>c;i--)
    arr[i]=arr[i-1];
    arr[c]=b;
    n++;
    break;
    case 4:
    int d;
    cout<<"Enter the index you want to delete = \n";
    cin>>d;
    if(d<0||d>=n){
    cout<<"Invalid index.\n";
    break;
    }
    for(int i=d;i<n-1;i++)
    arr[i]=arr[i+1];
    cout<<"Element deleted.\n";
    n--;
    break;
    case 5:{
    int e;
    bool find=false;
    cout<<"Enter element you want to find = \n";
    cin>>e;
    for(int i=0;i<n;i++){
    if(arr[i]==e){
    cout<<"Element found at index = "<<i<<"\n";
    find=true;
    }
    }
    break;
    if(!find)
    cout<<"Element not found.\n";
    break;
    }
    case 6:
    cout<<"Program ended.\n";
    return 0;
    default:
    cout<<"Invalid choice.\n";
}
}
    return 0;
}