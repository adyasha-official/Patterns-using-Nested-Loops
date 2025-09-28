// print the pattern
/* 
12345
1234
123
12
1
*/
# include <iostream>
using namespace std;
void p7(int n){
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout<< j << " ";
        }
    cout << endl;
    }
}
int main(){
    int n; 
    cin >> n;
    p7(n);
}