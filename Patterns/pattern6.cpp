#include<bits/stdc++.h>

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
        for(j=2*i-1;j>=1;j--) // for descending
          
        //for(j=1; j<=2*i-1; j++) // for acending
            cout<<j;
        cout<<endl;
    }
}

//des
    1
   321
  54321
 7654321
987654321
    
      //ace
    1
   123
  12345
 1234567
123456789
