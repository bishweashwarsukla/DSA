/*
Given an array of positive integers.
Find the length of the longest sub-sequence such that elements in 
the subsequence are consecutive integers, the consecutive numbers can 
be in any order.
Example 1:
Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.
Example 2:

Input:
N = 7
a[] = {1,9,3,10,4,20,2}
Output:
4
Explanation:
1, 2, 3, 4 is the longest
consecutive subsequence.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec {2,6,1,9,4,5,3};
    sort(vec.begin(),vec.end());
    for(auto x: vec)
        cout<<x<<" ";
    cout<<endl;
    int k=0;
    int m=1;
    int temp=0;
    for(int i=0;i<vec.size()-1;i++)
    {
        if((vec[i]-vec[i+1])==-1)
            { k++;}
        if(vec[i]-vec[i+1]!=-1)
            {
                if(temp<k)
                    temp=k;
                    k=0;
            }
        // if(temp<k)
        //     temp=k;        
    }
        if(temp<k)
            temp=k;
    cout<<temp+1;

    return 0;
}