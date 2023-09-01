#include <bits/stdc++.h>

using namespace std;

double ma101 (){
	double diem = 0 ;
	char hsinh [15];
	char ma101 [15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	for ( int i = 0; i < 15 ; i++){
		cin >> hsinh [i];
		if( hsinh[i] == ma101[i]) diem = diem + (double)2/3;
	}
	cout <<fixed << setprecision(2) << diem ;
}

double ma102 (){
	double diem = 0 ;
	char hsinh [15];
	char ma102 [15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	for ( int i = 0; i < 15 ; i++){
		cin >> hsinh [i];
		if( hsinh[i] == ma102[i]) diem = diem + (double)2/3;
	}
	cout <<fixed << setprecision(2) << diem ;
}

int main (){
	int t; cin >> t;
	while ( t--){
		int made; cin >> made ;
		if ( made == 101){
			ma101();
		}
		if (made == 102){
			ma102();
		}
	}
}
