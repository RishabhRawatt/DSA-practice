#include<iostream>

using namespace std;

int main()
{
    int n=7;
    int k=1;
    for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(j<=k || j>=n-k+1) cout<<j;
        else cout<<" ";
        
    }
    if(i<=n/2)
        k++;
    else 
        k--;
    cout<<endl;
}
}


1     7
12   67
123 567
1234567
123 567
12   67
1     7
