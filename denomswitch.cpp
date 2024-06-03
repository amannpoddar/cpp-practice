#include<iostream>
using namespace std;

int main(){

    int money,hd,fif,twe,one;
    cin >> money;

    switch(money>=100){
        case 1:
            hd = money/100;
            money = money%100;
            cout << "No. of 100 notes: " << hd << endl;
            break;
    }
    switch(money >= 50 && money < 100){
        case 1:
            fif = money/50;
            money = money % 50;
            cout << "No. of 50 notes: " << fif << endl;
            break;
    }
    switch(money >= 20 && money < 50){
        case 1:
            twe = money/20;
            money = money % 20;
            cout << "No. of 20 notes: " << twe << endl;
            break;
    }
    switch(money >= 1 && money < 20){
        case 1:
            one = money/1;
            money = money % 1;
            cout << "No. of 1 notes: " << one << endl;
            break;
    }
}