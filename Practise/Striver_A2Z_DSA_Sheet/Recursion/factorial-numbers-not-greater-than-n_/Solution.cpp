#include <iostream>
#include <vector>
using namespace std;
#define ll long long
void factorials(vector<ll> &itr ,ll i, ll f, ll N){
    f*= i;
    if(f>N) return;
    
    itr.emplace_back(f);
    factorials(itr, i+1, f, N);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> facts;
    factorials(facts, 1, 1, n);
    return facts;
}

int main(){
    int n=7;
    vector<ll> fact= factorialNumbers(n);
    
    cout<<"Factorials are: \n";
    for(auto i: fact)
        cout<< i<<" ";
    cout<<"\n";

    return 0;
}