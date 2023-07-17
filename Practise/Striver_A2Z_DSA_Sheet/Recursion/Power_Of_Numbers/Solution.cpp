#include<iostream>
using namespace std;
class Solution
{
public:
    // You need to complete this fucntion

    long long power(int N, int R)
    {
        long num = 1, r = 1, n = N;

        if (n == 1 || n == 0)
            return n;

        r = (r < 0) ? -r : r;

        while (r > 0)
        {
            if (r % 2)
            {
                num *= N;
                r--;
            }
            else
            {
                num *= num;
                r /= 2;
            }
        }

        if (R < 0)
        {
            num = 1 / num;
        }
        return num;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    cout<< sol.power(2,5)<<"\n";
    return 0;
}
