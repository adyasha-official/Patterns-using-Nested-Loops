// print the pattern
/*
*********
 *******
  *****
   ***
    *
*/
# include <iostream>
using namespace std;
void p9(int n){
    for (int i = n; i >=1 ; i--){
        //space
        for (int j = 0; j < n - i ; j++){
            cout << " ";
        }
        //stars
        for (int j = 0; j < 2 * i - 1; j++){
            cout << "*";
        }
        // space 
        for (int j = 0; j < n - i ; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n; 
    cin >> n;
    p9(n);
}
