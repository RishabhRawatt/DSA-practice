#include<iostream>
using namespace std;
int main()
{
    int i, j, space;
    space = 5-1;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space--;
        for(j=1; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }
    space = 1;
    for(i=1; i<=(5-1); i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(j=1; j<=(5-i); j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}


    * 
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
