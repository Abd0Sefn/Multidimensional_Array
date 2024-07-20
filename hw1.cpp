#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m]{};
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> arr[i][j];
        }
    }
    int q{};
    cin >> q;
    while(q--){
        bool ans = true;
        int n1{}, n2{};
        cin >> n1 >> n2;
        for(int j = 0; j < m; ++j){
            if(arr[n1 - 1][j] > arr[n2 - 1][j]){
                ans = false;
                break;
                }
            }
        if(ans)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}