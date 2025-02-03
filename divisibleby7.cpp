#include<iostream>
using namespace std;

int call(int &n){    
    n=abs(n);
    while(n>=7){
        n-=7;
    }
    return (n==0);

}

int main(){
    int n=-21;
    if(call(n)){
        cout<<"Divisible";
    }
    else{
        cout<<"NOT";
    }
    return 0;
}