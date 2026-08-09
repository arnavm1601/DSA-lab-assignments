#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
void printmatrix(int mat[10][10],int a, int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
             cout<<mat[i][j]<<" ";}
        cout<<"\n";}
}
int main() {
    int n=0;
    int arr[100];
    int a;
    int temp=0;
    while(true){
    cout<<"To Reverse the Elements of an Array Press 1\n";
    cout<<"To Do the Matrix Multiplication Press 2.\n";
    cout<<"To Find the Transpose of a Matrix Press 3.\n";    
    cout<<"To Exit Press 4.\n";
    cin>>a;
    switch(a){
    case 1:
     cout<<"Enter size of array => ";
    cin>>n;
    cout<<"Enter elements of array => \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Before Reversel.\n";
        print(arr,n);
        for(int i=0;i<n/2;i++){
            temp=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
        cout<<"\nAfter Reversel.\n";
        print(arr,n);
        cout<<"\n";
    break;
    case 2:
        int r1,r2,c1,c2;
        int m1[10][10],m2[10][10],result[10][10];
        cout<<"Enter Rows and Coloumn of Matrix 1 => \n";
        cin>>r1>>c1;
        cout<<"Enter Rows and Coloumn of Matrix 2 => \n";
        cin>>r2>>c2;
        if(c1!=r2){
            cout<<"Multiplication not Possible.\n";
        break;
        }
        cout<<"Enter Elements of First Matrix => \n";
        for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++)
                cin>>m1[i][j];
        cout<<"Enter Elements of Second Matrix => \n";
        for(int i=0;i<r2;i++)
            for(int j=0;j<c2;j++)
                cin>>m2[i][j];
        cout<<"First Matrix =>\n";
        printmatrix(m1,r1,c1);
        cout<<"Second Matrix =>\n";
        printmatrix(m2,r2,c2);
        for(int i=0;i<r1;i++)
            for(int j=0;j<c2;j++){
                result[i][j]=0;
                for(int k=0;k<c1;k++)
                    result[i][j]+=m1[i][k]*m2[k][j];
            }
            cout<<"\nResult is =>\n";
        printmatrix(result,r1,c2); 
        cout<<"\n";
    break;
    case 3:
    int r,c;
    int mat[10][10];
    int t[10][10];
    cout<<"Enter Rows and Coloumn of Matrix => \n";
    cin>>r>>c;
    cout<<"Enter Elements of Matrix => \n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>mat[i][j];
    cout<<"Original Matrix =>\n";
    printmatrix(mat,r,c);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            t[j][i]=mat[i][j];
    cout<<"Transpose =>\n";
    printmatrix(t,c,r);
    break;
    case 4:
    return 0;
    default:
    cout<<"Invalid Choice.\n";
    }
    }
    return 0;
}