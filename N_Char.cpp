#include<iostream>
using namespace std;

int main(){
char X;
cin >> X;


if(char(X) >=65 && char(X) <=90){
    cout << char(int(X)+32);
}
else if(char(X) >=97 && char(X) <=122){
    cout << char(int(X)-32);
}


    return 0;
}