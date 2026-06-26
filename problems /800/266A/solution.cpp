#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int crt = 0;
    for(int i = 0; i < n; i++){
		if(s[i] == s[i+1]){
		    crt++;
		}
	}
	cout << crt;
}
