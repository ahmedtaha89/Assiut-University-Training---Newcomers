#include<iostream>
using namespace std;

int main(){

int n;
long int num,positive=0,negative=0,odd=0,even=0;
cin >> n;
int i;

for(i=0;i<n;i++){
    cin >> num;

    if(num!=0){
        if(num>0){
    positive+=1;
}
else{
    negative+=1;
}
    }

if(num%2==0){
 even+=1;
}
else{
  odd+=1;
}
}

cout << "Even: " << even <<endl;
cout << "Odd: " << odd <<endl;
cout << "Positive: " << positive <<endl;
cout << "Negative: " << negative <<endl;


    return 0;
}