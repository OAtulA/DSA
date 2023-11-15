#include <iostream>
#include <string>

using namespace std;
bool PalinCheck(int l, int r, string &str){
    if(l>=r)return true;
    if(str[l] != str[r]) return false;
    return PalinCheck(++l, --r, str);
}
bool isPalindrome(string& str) {
    return PalinCheck(0, str.length()-1, str);
}

int main(int argc, char const *argv[])
{
    string s="MeeM";
    cout<<s << "is Palindrome: "<< isPalindrome(s);
    return 0;
}

