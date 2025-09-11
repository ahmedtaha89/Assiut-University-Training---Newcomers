#include<iostream>
using namespace std;

int main(){
long long N,sum=0;
cin >> N;

// for(int i =1;i<=N;i++){
// sum+=i;
// }

sum = (N*(N+1))/2;
cout << sum;

    return 0;
}