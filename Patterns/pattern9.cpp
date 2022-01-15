#include <iostream>
using namespace std;
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k==1|| k==(2*i-1))
                cout<<char(64+i);
            else    
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}


 E       E
  D     D
   C   C
    B B
     A
