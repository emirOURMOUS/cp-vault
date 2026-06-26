#include <iostream>
#include <vector>
using namespace std;

int main() {
	int hired = 0;
	int untreated = 0;
    int n;
    cin >> n;
    int arr[n];
    for(int o = 0; o < n; o++){
		cin >> arr[o];
	}
	for(int i = 0; i < n; i++){
		if (arr[i] > 0){
			hired = hired + arr[i];
		}
		if (arr[i] < 0 && hired < 1){
			untreated = untreated + 1;
		}
		if (arr[i] < 0 && hired > 0){
			hired = hired - 1;
		}
	}
	cout << untreated;
}
