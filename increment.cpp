#include<iostream>
using namespace std;

int main(){
    // int i = 7;
    // cout << (++i) << endl;
    // //8
    // cout << (i++) << endl;
    // //8 , i=9
    // cout << (i--) << endl;
    // //i=8
    // cout << (--i) << endl;
    // int a =1;
    // int b=a++;
    // int c= ++a;
    // cout<<b;
    // cout << c;

    int a=1,b=2;

    if(a-- >0 && ++b > 2){
        cout << "Stage! - Inside if ";
    } else{
        cout << "Stage 2 - Inside else";
    }
    cout << a << " " << b << endl;
}