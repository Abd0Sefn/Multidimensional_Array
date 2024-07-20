#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i =0; i < n; ++i){
        for(int j = 0; j < m; ++j)
        cin >> arr[i][j];
    }
    int q{};
    cin >> q;
    while (q > 0)
    {
        q--;
        int i, j, r, c;
        cin >> i >> j >> r >> c;
        int ans[r * c]{}, cnt{};
        for (int k = 0; k < r * c; ++k)
        {
            int num = arr[i + k / r][j + k % c];
            bool is_prime = true;
            for (int s = 2; s < num / 2; ++s)
            {
                if (num % s == 0)
                {
                    is_prime = false;
                    break;
                }
            }

            if (num == 0 || num == 1)
                is_prime = false;
            if (is_prime)
            {
                cnt++;
                ans[k] = num;
            }
        }
        cout << cnt << "(primes";
        for (int s = 0; s < cnt; s++)
        {
            cout << " " << ans[s];
            if (s != cnt - 1)
                cout << ",";
        }
        cout << " in rectangle (%d, %d) (%d, %d))", i, j, i + r - 1, j + c - 1;
    }
    return 0;
}