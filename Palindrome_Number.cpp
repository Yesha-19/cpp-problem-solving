#include<bits/stdc++.h>
using namespace std;
int counter(int a, int b=0){
    if(a > 0){
        int c = a% 10;
        b = b*10 + c;
        return counter(a/10,b);
    }
    else {
        return b;
    }
}
int main(){
    int n;
    cout << "Enter Number n: " << endl;
    cin >> n;
    int d;
    d = counter(n);
    if (d == n){
        cout << "Palindrome Number" << endl;
    }
    else {
        cout << "Not Palindrome Number" << endl;
    }
    return 0;
}
