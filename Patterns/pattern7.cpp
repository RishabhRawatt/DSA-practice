#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=5;i>=0;i--){
        for(j=5;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            cout<<j;        
            }
            cout<<endl;
    }
    
}


5
54
543
5432
54321
543210
54321
5432
543
54
5
