#include <iostream>
#include <vector>
#include<map>
using namespace std;
 
int main()
{
    vector<int>arr={1,1,2,2,1,2,3,1,4,4};
 
    map<int, int>y;
 
    for(auto i : arr){
 
        y[i]++;
 
    }
 
    for(auto &j : y){
 
        cout<<j.first<<" "<<j.second<<endl;
 
    }
 
    return 0;
 
}