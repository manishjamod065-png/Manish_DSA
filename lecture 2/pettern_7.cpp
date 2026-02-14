#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n = (m+1)/2;
    for( int i = 1; i <= n; i++){
         for (int j =1; j<=n-1; j++){
            cout<<"* ";
         }
         for (int j=1; j<=2*i;j++){
            cout <<"  ";

         }
         for ( int j=1;j<=n-1;j++){
            cout<<"* ";
         }
         cout<<endl;
    }
    for( int i = n-1; i >= n; i--){
         for (int j =1; j<=n-1; j++){
            cout<<"* ";
         }
         for (int j=1; j<=2*i;j++){
            cout <<"  ";

         }
         for ( int j=1;j<=n-1;j++){
            cout<<"* ";
         }
         cout<<endl;
    }
}