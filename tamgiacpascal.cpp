#include<iostream>
using namespace std;
int factor(int k, int n) {
 if (k == 0 || k == n) return 1;
 if (k == 1) return n;
 return factor(k - 1, n - 1) + factor(k, n - 1);
}
int main(){
 int n;
 cin >> n;
 for (int i = 0; i < n; i++) {

    for (int j = 0; j <= i; j++) {
         cout << factor(j, i) << " ";
 }
         cout << endl;
 }
 system("pause");
 return 0;
}
