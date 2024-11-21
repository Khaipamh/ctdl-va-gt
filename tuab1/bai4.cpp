#include<iostream>
#include<string>
using namespace std;
string vietThuong(string a){
    for (int i = 0; i< a.size(); i++){
        if (a[i]>= 65 && a[i]<= 90){
            a[i] += 32;
        }
    }
    return a;
}
int main(){
    int demkitu= 0;
    string S;
    char c;
    cout <<"Hay nhap xau: ";
    getline(cin, S);
    cout<<"Nhap ki tu c: ";
    cin >> c;
    for (int i = 0; i<S.size();i++){
        if (S[i] == c ) demkitu ++;
    }
    cout<<"Ki tu "<<c<<" xuat hien: "<< demkitu<<" lan.\n";
    cout << vietThuong(S)<<endl;
    int demtu =0; 
    if (S[0] != ' ') demtu = 1;
    for (int i = 1; i<S.size(); i++){
        if ((S[i] == ' ' )&& (S[i+1] != ' ' )) demtu++;
    }
    cout <<"So tu xuat hien trong S la: "<< demtu<<"\n";
}