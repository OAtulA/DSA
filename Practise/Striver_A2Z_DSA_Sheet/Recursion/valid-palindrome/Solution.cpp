#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeNotAlphaNum(string &s){
        string str="";
        for(char c: s){
            if( isalnum(c) ) str+= c;
        }
        return str;
    }
    bool PalinCheck(int l, int r, string &str){
        if (l >= r)
            return true;
        if (str[l] != str[r])
            return false;
        return PalinCheck(++l, --r, str);
    }
    bool isPalindrome(string s){
        s = removeNotAlphaNum(s);
        for(auto& c: s)
        c= tolower(c);
        return PalinCheck(0, s.length()-1, s);
    }
};

int main(int argc, char const *argv[])
{
    Solution obj;
    string s="jmJ";
    s="0P";
    cout<<"Palin "<< obj.isPalindrome(s);
    return 0;
}
