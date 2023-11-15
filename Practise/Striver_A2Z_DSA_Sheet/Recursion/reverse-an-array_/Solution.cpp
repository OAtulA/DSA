#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swapRev(vector<int>::iterator l, vector<int>::iterator r){
    int temp = *l;
    if(l>=r) return;
    *l =*r;
    *r= temp;
    swapRev(l+1,r-1);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    swapRev(nums.begin(), nums.end()-1);
    return nums;
}

int main(){
    vector<int> jc = {2,3,4,12,47,18,64,199};
    reverseArray(jc.size(), jc);
    cout<<"THe sorted vector\n";
    for(auto i: jc)
    cout<< i<< " ";
    cout<<endl;
    return 0;
}