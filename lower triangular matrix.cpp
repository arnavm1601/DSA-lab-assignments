#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter order of matrix: ";
    cin>>n;
    int arr[n*(n+1)/2];
    cout<<"Enter matrix:\n";
    int k=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            if(i>=j){
                arr[k]=x;
                k++;}
        }
    cout<<"Stored array: ";
    for(int i=0;i<n*(n+1)/2;i++)
        cout<<arr[i]<< " ";
    return 0;
}