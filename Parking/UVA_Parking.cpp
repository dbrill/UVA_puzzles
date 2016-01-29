#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std;
int main(){
	int cases;
	scanf("%d", &cases);
	for(int i = 0; i < cases; i++){
		int stores;
		cin >> stores;
		//int locations[stores] = {};
		int max = -1;
		int min = -1;

		for(int j = 0; j < stores; j++){
			int x;
			cin >> x;
			if(min == -1){
				min = x;
				max = x;
			}
			if(min > x){
				min = x;
			}
			if(max < x){
				max = x;
			}
		}
		int result = (max - min) * 2;
		cout << result << endl;
	}
}
