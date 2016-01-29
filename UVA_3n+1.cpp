#include <stdio.h>
#include <iostream>

using namespace std;

int cycles(int n){
	int count = 0;
	while(n != 1){
		if(n % 2 == 0){
			n = n/2;
		}
		else{
			n = (3*n) + 1;
		}
		count+= 1;
	}
	return (count + 1);
}

int main(){
	int i, j, max, current;
	bool swapped = false;
	while(cin >> i && cin >> j){
		swapped = false;
		if(i > j){
			int temp = i;
			i = j;
			j = temp;
			swapped = true;
		}
		max = 0;
		for(int k = i; k <= j; k++){
			current = cycles(k);
			if(current > max){
				max = current;
			}
		}

		if(swapped){
			cout << j << ' ' << i << ' ' << max << endl;
		}
		else{
			cout << i << ' ' << j << ' ' << max << endl;
		}
	}
}