#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 1;
    bool end = false;
    int arr[n][n] {};    //0 ==> empty   1 ==> x      2 ==> o
    int res = -1;
    while(! end && cnt <= n * n){
        if (cnt % 2){
            cout << "Player x turn. Enter empty location (r, c): ";
            int i , j;
            cin >> i >> j;
            --i; --j;
            if(i < 0 || i >= n || j < 0 || j >= n || arr[i][j] != 0){
                cout << "Invalid input. Try again\n";
                continue;
            }
            arr[i][j] = 1;
        }
        else{
            cout << "Player o turn. Enter empty location (r, c): ";
            int i , j;
            cin >> i >> j;
            --i; --j;
            if(i < 0 || i >= n || j < 0 || j >= n || arr[i][j] != 0){
                cout << "Invalid input. Try again\n";
                continue;
            }
            arr[i][j] = 2;
        }
        cnt ++;
        for(int a = 0; a < n; ++a){
            for(int b = 0; b < n; ++b){
                if(arr[a][b] == 1)
                cout << "x" << " ";
                else if(arr[a][b] == 2)
                cout << "o" << " ";
                else 
                cout << "." << " ";
            }
            cout << endl;
        }
        if (cnt > 2){
            for(int i = 0; i < n && ! end; ++i){
                int last_val = arr[i][0];
                for(int j = 0; j < n; ++j){
                    if(arr[i][j] != last_val || ! arr[i][j])
                    break;
                    if(j == n - 1){
                    if(arr[i][j] == 1)
                        res = 1;
                    else 
                        res = 2;
                    end = true;
                    }
                }
            }
            if(! end){
                for(int j = 0; j < n && ! end; ++j){
                    int last_val = arr[0][j];
                    for(int i = 0; i < n; ++i){
                        if(arr[i][j] != last_val || ! arr[i][j])
                        break;
                        if(i == n - 1){
                        res = arr[i][j];
                        end = true;
                        }
                    }
                }
            }
            if(! end){
                int last_val = arr[0][0];
                for(int i = 0; i < n; ++i){
                    if(arr[i][i] != last_val || ! arr[i][i])
                    break;
                    if(i == n - 1){
                        res = arr[i][i];
                        end = true;
                    }
                }
            }
            if(! end){
                int last_val = arr[0][n - 1];
                for(int i = 0; i < n; ++i){
                    if(arr[i][n - i - 1] != last_val || ! arr[i][n - i - 1])
                    break;;
                    if(i == n - 1){
                        res = arr[i][n - i - 1];
                        end = true;
                    }
                }
            }
        }
    }
    if(res == 1)
        cout << "Player x won!";
    else if(res == 2)
        cout << "Player o won!";
    else
        cout << "draw!";
    cout << endl;
    return 0; 
}