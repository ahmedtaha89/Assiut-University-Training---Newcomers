#include<iostream>
using namespace std;

int main(){
double N;
cin >> N;

if(N>=0 && N<=100){
cout << "Interval ";

if(N>=0&&N<=25.0){
cout << "[0,25]";}

else if(N>25.0&&N<=50.0){
cout << "(25,50]";}

else if(N>50.0&&N<=75.0){
cout << "(50,75]";}

else if(N>75.0&&N<=100.0){
cout << "(75,100]";}

}
else 
cout << "Out of Intervals";

return 0;
}