#include <iostream>
#include<string>
using namespace std;

bool call(string &str1, string &str2, int k){
    int count = 0;
    if(str1.length() != str2.length()){
        cout<<"False because of length mismatch."<<endl;
        return false;
    }
    
    for(int i=0; i<str1.length(); i++){
        if(str1[i] != str2[i]){
            count++;
        }
        if (count > k) {
            return false;
        }
    }
    if(count == k){
            return true;
        }    
    cout<<"False because of count less than k : "<<count<<endl;
    return false;
}

int main()
{
    string str1="shravan";
    string str2="shrqqvn";
    int k = 1;
    
    if(call(str1, str2, k)){
        cout<<"True";
    }else{
        cout<<"False";
    }

    return 0;
}