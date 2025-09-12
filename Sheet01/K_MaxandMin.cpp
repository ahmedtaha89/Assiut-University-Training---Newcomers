#include<iostream>
using namespace std;

int main(){

long long A,B,C,Min,Max;
cin >> A >> B >> C;

//min
if (A<=B && A<=C)
{
    Min = A;
}
else if (B<=A && B<=C)
{
    Min = B;

}
else 
    Min = C;


//max

if (A>=B && A>=C)
{
    Max = A;
}
else if (B>=A && B>=C)
{
    Max = B;

}
else 
    Max = C;

cout << Min << " " << Max ;
    return 0;
}