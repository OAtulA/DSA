#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0, sign = 1;
        // to help with addition
        if (x < 0) {
            sign = -1;
            x = -x;
        }

        while (x > 0) {

            // to check if the generated number is bigger than maxInt32
            if ((ans * 10 + x % 10) >=  __INT32_MAX__ ) {
                return 0;
            }

            ans = ans * 10 + x % 10;

            x /= 10;
        }

        // set sign

        return sign * ans;
  
    }
};

int main(int argc, char const *argv[])
{
    Solution obj;
    int ans = obj.reverse(-2143847412);

    
    cout << ans << "\n";
    return 0;
}
