//--------------------------------------------------------------------------------------------------------------------------------------------------------------
// Lab manual 6, home task 2
// By Faizan Ahmad 476602 Section A
// This code will print the following pattern:

//	1
//	12
//	123
//	1234
//	12345
//	123456
	

#include<iostream>
using namespace std;
int main() {

int n;	// n  is the number of rows
cout<<"Enter the number of rows you would like"<<endl;	//promp asking for user input of n
cin>>n;

for ( int i=1; i<n; i++ ) {			//this loop repeats "n" times
	for ( int j=1; j<=i; j++ ) {	//this secound loop prints the content of each row
		cout<<j<<" ";				//since j starts from 1 and always increments "i" number of times, its used to print the pattern
	}
	cout<<endl;						//this line of code moves on to the next row after a row is completed
}
	
return 0;
}














