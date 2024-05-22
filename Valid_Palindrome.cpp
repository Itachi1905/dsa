#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }
    
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        
        //faltu character hatado
        string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
        
    }
};
int main() {
    Solution solution;

    // Test cases
    string input1 = "A man, a plan, a canal, Panama!";
    string input2 = "race a car";
    string input3 = "Was it a car or a cat I saw?";
    string input4 = "No 'x' in Nixon";

    cout << "Input 1: " << input1 << " - Is Palindrome: " << (solution.isPalindrome(input1) ? "Yes" : "No") << endl;
    cout << "Input 2: " << input2 << " - Is Palindrome: " << (solution.isPalindrome(input2) ? "Yes" : "No") << endl;
    cout << "Input 3: " << input3 << " - Is Palindrome: " << (solution.isPalindrome(input3) ? "Yes" : "No") << endl;
    cout << "Input 4: " << input4 << " - Is Palindrome: " << (solution.isPalindrome(input4) ? "Yes" : "No") << endl;

    return 0;
}
