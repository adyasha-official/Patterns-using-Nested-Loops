// print the pattern
/*
A
BB
CCC
DDDD
EEEEE
*/
#include <iostream>
using namespace std;
void p17(int n){
    for (int i = 0; i < n; i++){
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++){
            cout<<ch;
        }
    cout << endl;
    }
}
int main (){
    int n;
    cin >> n;
    p17(n);
}