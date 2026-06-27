#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1;
	cin >> s1;
	string s2;
	cin >> s2;
	for(int i = 0; i < (int)s1.length(); i++){
		if(s1[i] != s2[i]){
			cout << "1";
		}
		else{
			cout << "0";
		}
	}
}
