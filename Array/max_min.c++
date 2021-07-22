/*
Write a C function to return minimum and maximum in an array. Your program should make the minimum number of comparisons. 
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec={2,5,6,1,3};

    sort(vec.begin(),vec.end());
    cout<<vec[0];
    cout<<" "<<vec[vec.size()-1];
    auto a = min_element(vec.begin(),vec.end());
    cout<<"minimum element is"<<*a<<endl;

    auto b= max_element(vec.begin(),vec.end());
    cout<<"maximum element is "<<*b;
    return 0;

}
