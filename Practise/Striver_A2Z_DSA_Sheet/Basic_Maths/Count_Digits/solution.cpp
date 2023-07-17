#include <iostream>

using namespace std;

int countDigits(int n){
	// Write your code here.	
	int backup= n,evenDiv=0, digit;

	while(n>0){
		digit = n%10;

		if(!(backup% digit)) 
		 evenDiv++;

		n/=10;
	}

	return evenDiv;
}

int main(int argc, char const *argv[])
{
    cout<< countDigits(336)<<"\n";
    return 0;
}
