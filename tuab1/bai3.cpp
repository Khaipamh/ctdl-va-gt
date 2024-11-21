#include<iostream>
#include<string>
using namespace std;
int main(){
    int demso= 0;
    string S;
    string W;
    cout <<"Hay nhap xau: ";
    getline(cin, S);
    cout<<"Nhap tu W: ";
    cin >> W;
    for (int i = 0; i<S.size();i++){
        if (S[i]>= 48 && S[i]<= 57 ) demso ++;
    }
    cout<<"So chu so xuat hien trong S la: "<<demso<<endl;
    
    int demtu =0; 
    if (S[0] != ' ') demtu = 1;
    for (int i = 1; i<S.size(); i++){
        if ((S[i] == ' ' )&& (S[i+1] != ' ' )) demtu++;
    }
    cout <<"So tu xuat hien trong S la: "<< demtu<<"\n";
    if (S.find(W) == false){
        cout <<"W khong xuat hien trong xau S ";
    }
    else cout<<"W xuat hien trong sau S";
    return 0;
}