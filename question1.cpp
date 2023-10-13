#include<iostream>
#include<vector>
using namespace std ;
void display(vector<int>&v)
{
    for (int i=0 ;i<v.size();i++)
    {
        cout<< v[i]<< " ";
    }
    cout<< endl ;
}
int main ()
{
    int x ;
    cout<< "enter the target number ";
    cin >> x ;
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
    
    int count = 0 ;
    for (int i=0 ; i<v.size();i++)
    {
        
        for (int j=i+1 ; j<v.size();j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                
                if ((v[i]+v[j]+v[k])==x)  count++;
            }

        }

    }
    cout << "number of triplets = given no. is " << count ;
}