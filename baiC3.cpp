#include <iostream>

using namespace std;

void sapxep( int n , int a[])
{
    for( int i = 0 ; i < n ; i++)
    {
        for( int j = i + 1; j < n ; j++)
        {
            if( a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void dem_so_phan_tu(int n , int a[])
{
    sapxep(n,a);
    for( int i = 0 ; i < n; i++)
    {
        int cnt = 1;
        int b = i;
        for( int j = i + 1; j < n ; j++) //1 1 1 2 2 3 5
        {
            if( a[i] == a[j])
            {
                cnt++;
                b++;
            }
        }
        cout << a[i] << " " <<cnt << endl;
        i = b;
    }
}


int main()
{
   int n; cin >> n;
   int a[100];
   for( int i = 0 ; i< n ; i++)
   {
       cin >> a[i];
   }
   dem_so_phan_tu( n , a);

    return 0;
}
