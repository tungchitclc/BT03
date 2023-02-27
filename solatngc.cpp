#include <iostream>

using namespace std;

bool checklat( int n)
{
    int lat = n;
    int res = 0;
    while( n )
    {
        res = res * 10 +  n % 10;
    n/=10;
    }
    if( lat == res) return true;
    else return false;
}
int main()
{
  int n ;
  cin >> n ;
  if(checklat(n)) cout << "yes" << endl;
  else cout << "no" << endl;
    return 0;
}
