#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

bool call(string s1, string s2){
    
    if(s1.length() != s2.length()){
        return false;
    }
    
    unordered_map<char, char>map1, map2;
    
    for(int i=0; i<s1.length(); i++){
        if(map1.find(s1[i]) != map1.end()){
            if(map1[s1[i]] !=s2[i]){
                return false;
            }
        }else{
            map1[s1[i]] = s2[i];
        }
        
        if(map1.find(s2[i]) != map2.end()){
            if(map2[i] != s1[i]){
                return false;
            }
        }else{
            map2[s2[i]] = s1[i];
        }
    }
    return true;
}

int main(){
    string s1="abc", s2="don";
    if(call(s1,s2)){
        cout<<"True Brother";
    }else{
        cout<<"False Brother";
    }
    
}