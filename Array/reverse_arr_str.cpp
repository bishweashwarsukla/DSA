/*
Write a program to reverse an array or string
Difficulty Level : Basic
Last Updated : 08 Sep, 2020
 
Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec={1,4,2,3};
    reverse(vec.begin(),vec.end());
    for(auto x: vec)
        cout<<x<<" ";
    
    cout<<"\n string reversal\n";
    string str="heyy!!!";
    int n=str.length();
    cout<<"original string "<<str<<endl;
    for(int i=0;i<n/2;i++)
    {
        swap(str[i],str[n-i-1]);
    }
    cout<<str;
    return 0;

}