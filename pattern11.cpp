// print the pattern 
/* 
*
**
***
****
*****
****
***
**
*
*/
# include <iostream>
using namespace std;
void p11(int n){
    for (int i = 1; i <= 2 * n - 1; i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        for (int j = 1; j <= stars; j++){
            cout<< "*";
        }
        cout << endl;
    }
}
int main (){
    int n; 
    cin >> n;
    p11(n);
}