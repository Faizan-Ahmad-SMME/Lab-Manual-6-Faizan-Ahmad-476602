//--------------------------------------------------------------------------------------------------------------------------------------------------------------
// Lab manual 6, home task 3
// By Faizan Ahmad 476602 Section A
// This code will print the following pattern:

//	1
//	22
//	4444
//	666666

#include<iostream>
using namespace std;
int main() {
	
	int n, k = 2;	// n  is the number of rows
cout<<"Enter the number of rows you would like"<<endl;	//promp asking for user input of n
cin>>n;
cout<<"1"<<endl;

for ( int i=1; i<=n-1; i++ ) {
			
	for ( int j = 1; j <= (i)*2; j = j+1) {
		cout<<k;
	}
	k=k+2;
	cout<<endl;
						
}
	
return 0;
}










