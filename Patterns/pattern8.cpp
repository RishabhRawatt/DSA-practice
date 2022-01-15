#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == (2 * i - 1))
                cout << i;
            else
                cout<<" ";
        }
        cout << endl;
    }

    for (int i = 5 - 1; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <=2 * i - 1; k++)
        {
            if (k == 1 || k == (2 * i - 1))
                cout << i;
            else
                cout <<" ";
        }
        cout << endl;
    }
    return 0;
}



     1
    2 2
   3   3
  4     4
 5       5
  4     4
   3   3
    2 2
     1
