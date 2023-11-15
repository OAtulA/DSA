#include <iostream>
#include <vector>
using namespace std;

void fibogen(int a, int b, int n, vector<int>& v)
{
        int temp = a;
    a = b;
    b = temp + b;
    if (n == 1){
        v.emplace_back(b);
        return;
    }

    v.emplace_back(b);
    fibogen(a, b, n -2, v);
}
vector<int> generateFibonacciNumbers(int n)
{
    vector<int> fibs ={0};
    if(n==0) return fibs;
    fibs.emplace_back(1);
    if(n==1){        
        return fibs;
    }

    fibogen(0,1,n-1, fibs);
    
    return fibs;
}

int main(int argc, char const *argv[])
{
    int n = 4 ;
    vector<int> fibs = generateFibonacciNumbers(n);
    for(auto i: fibs)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}


// int fibosum(int a, int b, int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     if(a>=n || b>=n) return;
//     return a+ fibosum(b, a+b, n);
// }


// https://www.codingninjas.com/studio/problems/print-fibonacci-series_7421617?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM