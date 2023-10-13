#include<iostream>
#include<vector>
using namespace std ;
int main ()
{
    int a[5] = {1,6,4,7,3};
    int b[3] = {1,3,5};
    bool flag = true ;
    for (int i=0;i<3;i++)
    {
        for (int j=0 ; j<5;j++)
        {
           if ( b[i] == a[j]) break ;
           if (j==4) {
            
            flag = false ;
            break ;
           }
        }
        
    }
    if (flag==true ) cout << "b s subset of a " ;
    else cout<< "b is not a subset of a ";
}