#include<iostream>
#include<string>
#include<cctype>  // For tolower
#include<unordered_set>  // For unordered_set to track unique alphabetic characters

using namespace std;

bool isPangram(string &s) {
    unordered_set<char> alphabetSet;

    // Convert each character to lowercase and add it to the set if it's a letter
    for (char &ch : s) {
        if (isalpha(ch)) {  // Check if the character is alphabetic
            alphabetSet.insert(tolower(ch));
        }
    }

    // If the set contains 26 characters (a-z), it's a pangram
    return alphabetSet.size() == 26;
}

int main() {
    string s = "The quick &brown fox jumps over the lazy dog";  // Pangram example
    // string s = "Hello world";  // Example that is NOT a pangram
    
    if (isPangram(s)) {
        cout << "True";  // If the string is a pangram
    } else {
        cout << "False";  // If the string is NOT a pangram
    }
    return 0;
}
