#include<iostream>
using namespace std;

long long sumFirstN(int N){
        if(N==1) return 1;
    return N+ sumFirstN(N-1);
}

long long sumFirstN(long long n) {

    return n*(n+1)/2;
}

int main(){
    cout<< "sum of first 24: "<< sumFirstN(50)<<endl;
    return 0;
}