#include<iostream>
using namespace std;

int main(){
int X,mod_X;
cin >> X;
mod_X = X / 1000;

if(mod_X % 2 == 0 ){
cout << "EVEN";
}
else 
cout << "ODD";
    return 0;
}