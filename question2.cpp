#include<iostream>
#include<vector>
using namespace std ;
int fact(int n )
{
    int fact = 1 ;
    for(int i =1; i<=n;i++)
    {
         fact *= i ;
    }
    return fact ;
}
int main ()
{
    vector<int>v;
    v.push_back(7);
    v.push_back(8);
    v.push_back(2);
    v.push_back(5);
    v.push_back(9);
    int max = -123465;
    for (int i=0 ; i<v.size();i++)
    {
        if (max < v[i]) max = v[i];
    }
    cout<<"maximum number is "<<  max << endl ;
    cout << "its factorial is "<<  fact(max)<<endl;
  
    return 0 ;
}