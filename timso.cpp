#include <iostream>

using namespace std;

int main()
{
    int n ;
    int a[1000];
    int cnt = 0;
    cin >> n;
    for( int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    for( int i = 0 ; i < n ; i++)
    {
        for( int j = i + 1 ; j < n ; j++)
        {
            if( a[j] == a[i])
            {
                cnt++;
            }
        }
    }
    if( cnt > 0 ) cout << "YES" << endl;
    else cout <<"NO" << endl;

    return 0;
}
