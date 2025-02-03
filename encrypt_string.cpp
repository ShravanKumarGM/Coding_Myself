#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s="aaaaaaaaaabbcc";
    reverse(s.begin(), s.end());
    unordered_map<char, int>mp1;
    vector<char>order;
    for(int i=0; i<s.length(); i++){
        if(mp1[s[i]] == 0){
            order.push_back(s[i]);
        }
        mp1[s[i]]++;
    }
    for(auto &ch : order){
        if(mp1[ch] > 9){
            cout<<hex<<mp1[ch]<<ch;
        }else{
            cout<<dec<<mp1[ch]<<ch;
        }
    }
    return 0;
}