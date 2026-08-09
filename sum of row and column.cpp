#include <iostream>
using namespace std;
void printmatrix(int mat[100][100],int a, int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
             cout<<mat[i][j]<<" ";}
        cout<<"\n";}
}
int main() {
    int r,c;
    int mat[100][100];
    cout<<"Enter Rows and Coloumn of Matrix => \n";
    cin>>r>>c;
    cout<<"Enter Elements of Matrix => \n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>mat[i][j];
    cout<<"Matrix =>\n";
    printmatrix(mat,r,c);
    cout<<"\nSum of every row\n";
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++)
            sum=sum+mat[i][j];
    cout<<"Row"<<i+1<<"="<<sum<<endl;
    }
    cout<<"\nSum of every column \n";
    for(int i=0;i<c;i++){
        int sum=0;
        for(int j=0;j<r;j++)
            sum=sum+mat[j][i];
    cout<<"Column"<<i+1<<"="<<sum<<endl;
    }
    return 0;
}