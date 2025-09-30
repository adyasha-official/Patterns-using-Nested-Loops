// print the pattern 
/* 
A
AB
ABC
ABCD
ABDE
*/
# include <iostream>
using namespace std;
void p15(int n){
    for (int i = 0; i < n; i++){
        for (char ch = 'A'; ch <= 'A' + i; ch++){
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