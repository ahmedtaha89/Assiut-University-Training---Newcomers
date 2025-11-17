#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
int counter=0;

for(int i=2;i<n;i++){
    if (n%i==0)
    {
     counter=1;
     break;
    }
    else{
     counter=0;
    }
}
if (counter==1){
cout << "No";
}
else{
    cout << "Yes";
}

    return 0;
}