/*
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

Example 1:

Input:
5
4 2 -3 1 6

Output: 
Yes

Explanation: 
2, -3, 1 is the subarray 
with sum 0.
Example 2:

Input:
5
4 2 0 1 6

Output: 
Yes

Explanation: 
0 is one of the element 
in the array so there exist a 
subarray with sum 0.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec {4,2,0,1,6};
    sort(vec.begin(),vec.end());
    int sum=0;
    int k=0;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[0]==0)
        {
            cout<<"YES";            k=1;
            break;

        }
        else
        {
            sum+=vec[i];
            if(sum==0)
            {
                cout<<"yES";            k=1;
                break;

            }
        }
    }

    if(k==0)
        cout<<"no";

return 0;
}