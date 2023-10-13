#include<iostream>
#include<vector>
using namespace std ;
int main ()
{
    vector<int>v;
    v.push_back(8);
    v.push_back(8);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);
    v.push_back(8);
    v.push_back(6);
    int n = v.size();
    
    for (int i=0;i<v.size();i++)
    {
        for (int j= 0;j<v.size();j++)
        {
            if (i!=j && v[i] == v[j]) break ;
            if (j== n-1 ){
                cout<< "first non repetative no. is "<< v[i] ;
                return 0 ;
            }
        }
        
    }
}