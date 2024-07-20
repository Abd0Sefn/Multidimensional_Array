#include<iostream>
using namespace std;
int main(){
    int n{}, sum{},sum_upper{}, sum_lower{};
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> arr[i][j];
            if(i == j)
            sum += arr[i][j];
            else if(i > j)
            sum_lower += arr[i][j];
            else
            sum_upper += arr[i][j];
        }
    } 
    cout << sum_lower + sum << "\n" << sum_upper + sum << endl;
    return 0;
}