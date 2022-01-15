#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j || i+j==5-1) cout<<i+1;
            else cout<<" ";
        }
cout<<endl;
}
return 0;
}

1   1
 2 2
  3
 4 4
5   5
