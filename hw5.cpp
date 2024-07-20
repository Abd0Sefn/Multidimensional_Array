#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
        cin >> arr[i][j];
    }

    int di[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dj[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    bool is_mountain = true;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            is_mountain = true;
            for(int k = 0; k < 8; ++k){
                if(i + di[k] >= 0 && i + di[k] < n && j + dj[k] >= 0 && j + dj[k] < m && arr[i][j] <= arr[i + di[k]][j + dj[k]]){
                    is_mountain = false;
                    break;
                }
            }
            if(is_mountain){
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}