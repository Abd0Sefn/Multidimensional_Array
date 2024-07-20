#include<iostream>
using namespace std;
int main(){
    int n, m, ni = 0, nj = 0;
    cin >> n >> m;
    int arr[n][m]{};
    int q{};
    cin >> q;
    while(q > 0){
        q--;
        int dir, steps;
        cin >> dir >> steps;
        if(dir == 1){
            steps %= n;
            ni -= steps;
            if(ni < 0)
            ni += n;
        }
        else if(dir == 2){
            steps %= m;
            nj += steps;
            if(nj > m)
            nj -= m;
        }
        else if(dir == 3){
            steps %= n;
            ni += steps;
            if(ni > n)
            ni -= n;
        }
        else if(dir == 4){
            steps %= m;
            nj -= steps;
            if(nj < 0)
            nj += m;
        }
        cout <<"(" << ni << ", " << nj <<")\t";
    }
    return 0;
}