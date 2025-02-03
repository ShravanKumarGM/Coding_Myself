#include<iostream>
#include<string>
using namespace std;

bool call(string &s1, string &s2){
    if (s1.length() != s2.length()) {
        return false;  // If lengths don't match, return false
    }

    string temp = s1+s1;

    int flag = temp.find(s2);
    if(flag==1){
        return true;
    }  
    return false;  // All characters match
}

int main(){
    string s1 = "abcd"; 
    string s2 = "acbd";
    if(call(s1, s2)){
        cout << "True";  // If the strings are equal, print "True"
    }
    else{
        cout << "False";  // If the strings are not equal, print "False"
    }
}
