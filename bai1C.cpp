#include <iostream>

using namespace std;

int trungbinh(int n , int a[1000])
{
    int sum = 0 ;
    for( int i = 0 ; i < n ; i++)
    {
        sum += a[i];
    }
    return sum/n;
}

int ps( int n , int a[1000])
{
    int sum1 = 0 ;
    for( int i = 0 ; i < n ;i++)
    {
        int res = a[i] - trungbinh(n,a);
        sum1 =sum1 + res * res;
    }
    return sum1/(n -1);
}
int main()
{
  int n ;
  cin >> n ;
  int a[1000];
  for( int i = 0 ; i < n ; i++)
  {
      cin >> a[i];

  }
  cout << trungbinh(n, a) << " " << ps(n , a);
    return 0;
}
