#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

string s,s2;
cin >> s;
s2 = s;
long long len = s.length();

reverse(s.begin(),s.end());

if(s2==s){
    cout <<s<<endl;
    cout << "YES";
}
else{

        int i = 0;
        while (i < len && s[i] == '0')
            i++;

        string noLeading = s.substr(i);

        cout << noLeading << endl;
        cout << "NO";

}
    return 0;
}