// print the pattern
// n stars as a square
# include <iostream>
using namespace std;
void nstar(int n){
    for (int i =0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    nstar(n);
}