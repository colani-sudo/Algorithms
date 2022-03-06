#include <iostream>
#include <vector>

using namespace std;

void isPalindrome(vector<string> str){

    for(string s: str){         //loop through the string vector
        bool isPal = true;      //bool variable to trce palindromes
        if(s.length() < 2){     //verify if each string is valid
            isPal = false;
        } else {
            int mid = s.length()/2;
            int rev = s.length() -1;
            for(int i=0; i < mid; i++){
                if(s[i] != s[rev]){
                    isPal = false;
                }   
            --rev;
            }
        }
        string result = (isPal)? "true": "false";
            cout<<result<<endl;
    }
}

int main(){
    vector<string> words = {"a","aa","aba","abba","raddar","madam","slovo"};

    isPalindrome(words);
    return 0;
}