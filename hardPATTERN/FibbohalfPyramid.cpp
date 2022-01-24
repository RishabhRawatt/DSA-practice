#include<iostream>
using namespace std;

int main()
{
    int n1=0,n2=1,n3=n1+n2;
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<n3<<" ";
        n3=n1+n2;
        n1=n2;
        n2=n3;
        }
        cout<<endl;
   

    }
}

1 
1 2
3 5 8
13 21 34 55
89 144 233 377 610
