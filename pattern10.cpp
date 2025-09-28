// print the pattern 
/* 
    *
   ***
  ***** 
 *******
*********
*********
 *******
  *****
   ***
    *

*/ 
# include <iostream>
using namespace std;
void p10(int n){
    for (int i = 0; i < n; i++){
        //space
        for (int j = 0; j < n - i -1; j++){
            cout << " ";
        }
        //stars
        for (int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >=1 ; i--){
        //space
        for (int j = 0; j < n - i ; j++){
            cout << " ";
        }
        //stars
        for (int j = 0; j < 2 * i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }  
}
int main(){
    int n; 
    cin >> n;
    p10(n);
}