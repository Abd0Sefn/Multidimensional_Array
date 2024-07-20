#include<iostream>
using namespace std;
int main(){
    int dep, row, col;
    cin >> dep >> row >> col;
    int arr[row][col][dep]{};
    int choice;
    cin >> choice;
    if(choice == 1){
        int d, r, c;
        cin >> d >> r >> c;
        cout << d * row * col + r * col + c << endl;
    }
    else if(choice == 2){
        int idx, r, d, c;
        cin >> idx;
        d = idx / (row * col);
        r = idx % (row * col) / col;
        c = idx % (row * col) % col;
        cout << d << " " << r << " " << c << endl;
    }
    return 0;
}