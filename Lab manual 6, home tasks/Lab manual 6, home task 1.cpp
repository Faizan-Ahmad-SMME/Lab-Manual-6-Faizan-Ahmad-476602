//--------------------------------------------------------------------------------------------------------------------------------------------------------------
// Lab manual 6, home task 1
// By Faizan Ahmad 476602 Section A
// This code will add all the prime numbers from 1 to 50

#include<iostream>
using namespace std;
int main() {

int sum = 0;	// sum will always be an integer so int was used

for ( int i=2; i<=50; i++) {	// first loop increments i by 1 after each loop
	int j;		// j will be used to check if i is a prime number or not
	for ( j=2; j<=25; j++ ) {	// this loop checks all vaues of j, if j can divide i then the loop breaks and i is incremented
	
		if ( i%j == 0 ) {		
			break;
		}
	}
	if ( j > i/2 )      // if j has reached 25 then that means that the above loop had checked all values between 1 and 25, hence i is a prime number
	sum = sum + i;	
	
}

cout<<"The sum of all prime numbers between 1 and 50 is: "<<sum;
return 0;
}











