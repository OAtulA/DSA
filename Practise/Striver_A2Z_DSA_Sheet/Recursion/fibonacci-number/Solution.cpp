#include <iostream>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        return fibogen(0,1,n);

        // if(n==1) return 1;
        // return fibosum(0,1,n);
    }
    int fibogen(int a, int b, int n){
        if(n==1) return b;
        int temp = a;
        a =b;
        b= temp+b;
        return fibogen(a, b, n-1);

    }
    // int fibosum(int a, int b, int n){
    //     if(n==0) return 0;
    //     if(n==1) return 1;
    //     if(a>=n || b>=n) return;
    //     return a+ fibosum(b, a+b, n);
    // }
};

int main(int argc, char const *argv[])
{
    Solution oh;
    int n =3;
    cout<<"fibo is "<< oh.fib(n);
    return 0;
}

// https://leetcode.com/problems/fibonacci-number/submissions/