#include<iostream>
#include<string>
#include<bitset>
using namespace std;

string call(string &s1, string &s2){
    bitset<8>b1(s1);
    bitset<8>b2(s2);
    
    bitset<8> sum = b1.to_ullong() + b2.to_ullong();
    cout<<"To check the sum result : "<<sum<<endl;
    
    string result = sum.to_string();
    size_t findone = result.find('1');
    if(findone != string::npos){
        return result.substr(findone);
    }
    return 0;
}

int main(){
    string s1 = "00100", s2 = "010";
    string sum = call(s1, s2);
    cout<<sum<<" <- in main starting without zeros."<<endl;
    return 0;
}