//--------------------------------------------------------------------------------------------------------------------------------------------------------------
// Lab manual 6, Lab task 1 and 2
// By Faizan Ahmad 476602 Section A
// This code will print the Fibonacci sequence

#include<iostream>
using namespace std;
int main() {

//Lab Task 1
//	
//	int n;
//	
//	cout<<"How many terms would you like"<<endl;
//	cin>>n;
//	
//	int x=1, y=0, term=0;
//for ( int j=1; j<=3 ; j++ )	{
//
//	for ( int i=1; i<=n ; i++ ) {
//		
//		cout<<term<<", ";
//		term = x + y;
//		x = y;
//		y = term;		
//		
//		
//	}
//}


//Lab Task 2

int lim;
cout<<"How many rows would you like?"<<endl;
cin>>lim;
int num = 1;
for( int i=0; i <= lim; i++ ) {
	for (int j = 0; j < i; j++ ) {
		cout<<num<<" ";
		num++;
	}
	cout<<endl;
}


	return 0;
}











