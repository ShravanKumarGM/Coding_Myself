#include <iostream>
#include<bitset>
using namespace std;

int main()
{
    string dec = "15"; // dec to bin
    int decnum = stoi(dec);
    bitset<8>b1(decnum);
    std::cout<<b1.to_string()<<" <- dec to bin"<<endl;
    
    string bin1 = "111"; //bin to dec 
    bitset<8>b2(bin1);
    cout<<b2.to_ullong()<<" <- bin to dec"<<endl;
    
    int decc=25; //dec to hex
    cout<<hex<<decc<<" <- dec to hex"<<endl;
    
    string bin2 = "1110"; //bin to hex 
    bitset<8>b3(bin2);//First convert to dec then to hex
    unsigned long long hex_dec = b3.to_ullong();
    cout<<hex<<hex_dec<<" <- bin to hex"<<endl;
    
    return 0;
}