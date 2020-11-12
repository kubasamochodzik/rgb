#include <iostream>
#include <bitset>
#include <math.h>

using namespace std;
int main(int argc, char** argv) {
    int color = 0x00aa5500; 
    int color1 = 0x00ffffff;
 
 
    int red = 0x00ff0000; //color red
    int green = 0x0000ff00;//color green
    int blue = 0x000000ff; //color blue
 
 
    int partRed = (color & red);
    int partBlue = (color & blue);
    int partGreen = (color & green);
 
    int partRed1 = (color1 & red);
    int partBlue1 = (color1 & blue);
    int partGreen1 = (color1 & green);
 
 
    int stepR = (partRed1 - partRed)/20;
    int stepG = (partGreen1 - partGreen)/20;
    int stepB = (partBlue1 - partBlue)/20;
 
    cout << hex << stepR << endl;
    cout << stepG << endl;
    cout << stepB << endl;
    
    return 0;
}
