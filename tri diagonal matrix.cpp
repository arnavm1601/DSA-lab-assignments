#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter order of matrix: ";
    cin>>n;
    int arr[3*n-2];
    cout<<"Enter matrix:\n";
    int k=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            if(i==j || i==j+1 || j==i+1){
                arr[k]=x;
                k++;}
        }
    cout<<"Stored array: ";
    for(int i=0;i<3*n-2;i++)
        cout<<arr[i]<< " ";
    return 0;
}