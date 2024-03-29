#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void helper(int n, vector<int>& arr){

    arr.emplace_back(n);

    if(n==1) return;
    helper(n-1, arr);
}


vector<int> printNos(int x) {
    // Write Your Code Here

    vector<int> arr;

    helper(x, arr);

    reverse( arr.begin(), arr.end() );
    return arr;


}

void helper2(int n, vector<int>& arr){
    /*
    if(n==1) arr.emplace_back(1);

    arr.emplace_back(n);
    arr.
    */

   //last condition
   if( n==1) {
    arr.insert(arr.begin(), n);
    return;
   }

   arr.insert(arr.begin(), n);

   helper2(--n, arr);
}



int main(int argc, char const *argv[])
{
    vector<int> aj= printNos(5);

    for (int i = 0; i < aj.size(); i++)
    {
        cout<< aj[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
