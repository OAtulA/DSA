#include <vector>
#include <iostream>

using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums){
    // n arr len
    // arr[i]<= x
    vector<int> freq(n);
    for (int i = 0; i < n; i++)
    {
        int data = nums[i];
        if(data<= x)
          freq[data-1]++;
    }
    return freq;
}

int main(int argc, char const *argv[])
{
    vector<int> arr= {1,3,1,9,2,7};
    arr = countFrequency(arr.size(), 9, arr);
    for(auto i: arr){
        cout<< i<<" ";
    } cout<<endl;
    return 0;
}
