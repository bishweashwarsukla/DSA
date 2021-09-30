//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int > v={0,1,0,1,2,1};

    int temp=0;
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            {
                temp=v[j];
                v[j]=v[i];
                v[i]=temp;
            }
        }
    }
    cout<<"sorted array is :\n";
    for(auto x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}