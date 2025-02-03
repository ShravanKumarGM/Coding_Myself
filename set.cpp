#include <iostream>
#include<set>
using namespace std;
 
int main()
{
    //set<int>arr={1,3,5,8,4,2,5};
    set<int, greater<int>>arr={1,3,5,8,4,2,5}; //To get in decending order use this template.

    for(auto &j : arr){
        cout<<j<<" ";
    }
 
    return 0;
 
}