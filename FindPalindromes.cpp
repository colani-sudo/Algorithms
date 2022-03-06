#include <iostream>
#include <vector>

using namespace std;

void isPalindrome(vector<string> str){

    for(string s: str){         //loop through the string vector
        bool isPal = true;      //bool variable to trce palindromes
        if(s.length() < 2){     //verify if each string is valid
            isPal = false;
        } else {
            int mid = s.length()/2; //get half size of string
            int rev = s.length() -1;    //get full size of string
            for(int i=0; i < mid; i++){ //loop through the string
                if(s[i] != s[rev]){         //compare string from front and from back towards midble
                    isPal = false;          //set isPal to false if the is a mismatch
                }   
            --rev;                          //loop backwards string
            }
        }
        string result = (isPal)? "true": "false";   //assign every isPal bool value to result
            cout<<result<<endl;                     //print result
    }
}

int main(){
    vector<string> words = {"a","aa","aba","abba","raddar","madam","slovo"};

    isPalindrome(words);
    return 0;
}