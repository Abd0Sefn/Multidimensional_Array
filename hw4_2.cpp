#include <iostream>
using namespace std;
int main()
{
    int n, m, val;
    cin >> n >> m;
    bool is_prime[n][m]{};
    for(int i =0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> val;
            if(val <= 1)
            continue;
            is_prime[i][j] = 1;
            for(int s = 2; s < val / 2; ++s){
                if(val % s == 0){
                    is_prime[i][j] = false;
                    break;
                }
            }
    }
    }
    int q{};
    cin >> q;
    while(q--){
        int si , sj , rows , colms;
        cin >> si >> sj >> rows >> colms;
        int cnt{};
        for(int i = si; i <= si + rows - 1; ++ i){
            for(int j = sj; j <= sj + colms - 1; ++j){
                cnt += is_prime[i][j];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}