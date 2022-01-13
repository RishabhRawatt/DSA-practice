#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    for ( i =1; i <= 5; i++)  
    {  
        for ( j = 1; j <= 5 - i; j++)  
        {  
            printf ("  ");   
        }  
        for ( k = 1; k <= i; k++)  
        {  
            printf ("* "); // print the Star  
            printf("  ");
        }  
        printf ("\n");  

    }
}



        *   
      *   *
    *   *   *
  *   *   *   *
*   *   *   *   *
