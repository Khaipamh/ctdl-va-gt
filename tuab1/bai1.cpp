#include <iostream>
#include <math.h>
using namespace std;
bool kiemTraSoNguyenTo(int soA){
    if (soA < 2) return false; 
    if (soA == 2) return true;
        for (int j = 2; j<= sqrt(soA); j++){
            if (soA % j == 0){
                return false;
            }
        }
        return true;
}
int main() {
    int n, demchan = 0,demprime = 0;
    int  a[20];
    do {
    cin >> n;}
    while (!(n>4 && n<20));
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    for (int i = 0; i<n; i++){
        cout << a[i]<<", ";
    }
    
    cout << "\nSo chan trong day la: ";
    for (int i = 0; i<n; i++){
        if (a[i]%2== 0){
            cout << a[i];
            demchan ++;
        }
        cout << a[i]<<", ";
    }
    cout << "\nSo nguyen to trong day la: ";
    for (int i = 0; i<n; i++){
        if (kiemTraSoNguyenTo(a[i]) == true){
            cout << a[i]<<", ";
            demprime ++;
        }
    }
    return 0;
}