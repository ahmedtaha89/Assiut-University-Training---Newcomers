#include<iostream>
using namespace std;

int main(){
long long int A,B,Mod_A,Mod_B;
cin >> A >> B;

Mod_A = A % 10;
Mod_B = B % 10;

cout << Mod_A + Mod_B <<endl;

    return 0;
}