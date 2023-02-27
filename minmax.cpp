#include <iostream>
#include<algorithm>

using namespace std;

int Findmax(int n , int a[1000])
{
    int Max = a[0];
    for( int i = 1 ; i < n ; i++)
    {

        if( Max < a[i] )
        {
            Max = a[i];
        }
    }
    return Max;
}

int Findmin( int n , int a[1000])
{
    int Min = a[0];
    for( int i = 1 ; i < n ; i++)
    {
        if( Min > a[i])
        {
            Min = a[i];
        }
    }
    return Min ;
}

int tongchan( int n , int a[1000])
{
    int sum = 0 ;
    for( int i = 0 ; i < n ; i++)
    {
        if( a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    return sum ;
}

int soluongle( int n , int a[1000])
{
    int cnt;
    for( int i = 0 ; i < n ; i++)
    {
        if( a[i] % 2 != 0 )
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n ;
    cin >> n;
    int a[1000];
    for( int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    cout << Findmax(n, a) << endl;
    cout << Findmin(n , a) << endl;
    cout << tongchan(n,a) << endl;
    cout << soluongle(n, a) << endl;
    return 0;
}
