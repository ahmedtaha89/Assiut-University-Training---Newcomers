#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const double PI = 3.141592653;
    double R,Area;
    cin >> R;

    Area = PI*(R*R);
    cout << fixed << setprecision(9) << Area;

    return 0;
}