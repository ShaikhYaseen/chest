//A cpp program to print a sine wave in command prompt
#include <iostream>
#include <cmath>

using namespace std;
double pi = 3.14159265359;
int main() {
    int alt = 30; //altitude. max 39
    int length = 200; // length of sin wave
    float dis= 0.3; //distance between two dots. 0.3 works fine

    float y;
    float deg=0;
    for(int i=0 ; i<length ; i++){
        y=sin(deg);
        for(int j=0 ; j<alt+(y*alt) ; j++)
            cout << " ";
        cout << "*";
        cout << endl;
        deg = deg + dis;
    }
}

