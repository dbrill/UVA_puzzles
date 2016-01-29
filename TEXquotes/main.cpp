/* 
 * File:   main.cpp
 * Author: dannybrill
 *
 * Created on September 17, 2015, 7:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <typeinfo>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string x;
    string y;
    int count = 0;
    while(getline(cin, x)){ 
        x += '\n';
        y.append(x);
        count++;
    }
    count = 0;
    for(int i = 0; i < y.length(); i++){
        if(y[i] == '"'){
            if(count % 2 == 0){
                y.erase(i, 1);
                y.insert(i, "``");
            }
            else{
               y.erase(i, 1);
               y.insert(i, "''");
            }
            count++;
        }
    }
    cout << y;
    return 0;
}

