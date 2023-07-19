#include <iostream>
#include <limits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int ans = 0, sign = 1;
        // to help with addition
        if (x < 0) {
            sign = -1;
            // as INT_MIN is -INT_MAX -1
            if(x== INT_MIN) return 0;
            else x = -x;
        }

        while (x > 0) {

            // to check if the generated number is bigger than maxInt32
            if( ans >INT_MAX/10 || (ans== INT_MAX/10 && x%10 >7) ) {
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
