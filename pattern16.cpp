// print the pattern 
/* 
ABCDE
ABCD
ABC
AB
A
*/
# include <iostream>
using namespace std;
void p15(int n){
    for (int i = n; i >= 1; i--){
        for (char ch = 'A'; ch < 'A' + i; ch++){
            cout << ch ;
        }
    cout << endl;
    }
}
int main (){
    int n; 
    cin >> n;
    p15(n);
}