#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>&arr) {
    for(int i=0; i< arr.size() -1; i++ ){
        int less_index=i;
        int j;
        for(j= i+1; j<arr.size(); j++){
            if(arr[less_index]>arr[j])
                less_index= j;
        }
        swap(arr[i],arr[less_index]);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr;
    int ar[]={2,232,1,3,14};
    for(auto I:ar) arr.emplace_back(I);
    selectionSort(arr);
    for(auto i: arr)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}
