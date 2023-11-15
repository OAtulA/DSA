#include <iostream>
using namespace std;
#define MOD 100000007

class Solution
{
public:
    
    long long power(long long x, long long y) //x^y
    {
        if (y == 0)
            return 1;
        // if(y==1) return x;
        // int ans = (x%MOD*x%MOD)%MOD;
        // if (y%2) return (x*power(ans, y/2))%MOD;
        // return power(x, y/2)%MOD;

        long long temp = power(x, y / 2);
        temp *= temp;
        temp %= MOD;

        if (y % 2)
            temp *= x;
        temp %= MOD;

        return temp;
    }
    int countGoodNumbers(long long n)
    {
        long long odd = n/2;
        long long even = n/2+ n%2 ;

        return (power(5, even)  * power(4, odd)) % MOD;
    }
};

/*
class Solution {
public:
    long long power(long long n,long long t){
        if(t == 0){
            return 1;
        }
        if(t % 2 == 0){
            long long key=power(n,t/2)%1000000007;
            return (key%1000000007)*(key%1000000007);
        }
        long long key=power(n,t-1)%1000000007;
        return (key*n)%1000000007;
    }
    long long countGoodNumbers(long long n) {
        long long even=5;
        long long prime=4;
        if(n % 2 == 0){
            long long e=n/2;
            return (power(5,e)%1000000007)*(power(4,e)%1000000007)%1000000007;
        }
        long long e=n/2;
        return (power(5,e+1)%1000000007)*(power(4,e)%1000000007)%1000000007;
    }
};

*/
int main()
{
    long long n = 4;
    Solution obhj;
    cout << "Ans: "<< obhj.countGoodNumbers(50) << endl;
    return 0;
}
