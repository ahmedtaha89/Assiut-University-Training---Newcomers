#include<iostream>
using namespace std;
#include <iomanip>

int main() {
float N;
cin >> N;
int X = (N*1000);

if(X%1000 == 0){
    cout << "int " << (N/1000)*1000<<endl;
}
else {
float Y = X % 1000;
Y=Y/1000;
cout << "float " << (int)N << " " << fixed << setprecision(3)<<Y <<endl;

}

    return 0;
}