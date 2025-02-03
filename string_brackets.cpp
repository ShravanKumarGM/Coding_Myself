#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
 
int call(string s){
    int cnt = count(s.begin(), s.end(), ')');
    for(int i=0; s[i]!='\0'; i++){
        if(cnt == i){
            return i;
        }
    }
    return s.size();
}
int main()
{
    string s= "(((()))()())()";
    cout<<call(s);
    return 0;
 
}

