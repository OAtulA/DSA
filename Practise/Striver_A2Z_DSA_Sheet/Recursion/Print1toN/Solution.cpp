#include<vector>
#include<iostream>

using namespace std;

void addElement(int i, int n, vector<int> &arr){
    arr.emplace_back(i);
    if(i<n)
        addElement(++i, n, arr);
}

vector<int> printNos(int x) {
    vector<int> arr;
    addElement(1,x, arr);
    return arr;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> ans =  printNos(n);
    for(int i: ans){
        cout<<i<<" ";
    }
    return 0;
}
