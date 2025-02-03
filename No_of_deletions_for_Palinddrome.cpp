#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
 
void call(string s){
    int cnt = 0;
    int st=0, e=s.length()-1;
    for(int i=0; s[i]!='\0'; i++){
        if(s[st] == s[e]){
            cout<<s[i]<<"";
            st++;
            e--;
        }else{
            cnt++;
            st++;
            e--;
            //continue;
        }
    }
    cout<<endl<<cnt;
}

int main()
{
    string s= "malayalam";
    call(s);
    return 0;
}


