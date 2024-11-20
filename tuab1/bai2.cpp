#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; int a[100];int max = 0,min = 0;
    do {
        cout <<"Hay nhap n: ";
        cin >> n;
    } while (!(n>0 && n<100));
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    for (int i = 0; i<n; i++){
        cout << a[i]<<", ";
        if (a[i] >= max) max = a[i];
        //indexmax = i;
         if (a[i] <= min) min = a[i];
         else min = a[0];
    }
    cout <<"\nSo lon nhat cua day la: "<< max<<endl;
    cout <<"\nSo nho nhat cua day la: "<< min<<endl;
    for (int i = 0; i< n-1; i++){
        int temp = 0;
        for (int j = i+1; j<n ;j++){

        if (a[i]> a[j]){
             temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    }
    for (int j = 0; j< n; j++){
        cout << a[j];
    }
    int x;
    cout << "Nhap x ";
    cin >> x;
    if ( x >= a[0]) a.push_back(x);
    return 0;
}bai 3 
