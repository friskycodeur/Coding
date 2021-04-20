#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string seat_type;
        int seat_number;
        cin >> seat_number;
        if(seat_number%6==0 || seat_number%6==1){
            seat_type="WS";
        }
        else if(seat_number%6==2 || seat_number%6==5){
            seat_type="MS";
        }
        else{
            seat_type="AS";
        }
        int num=((seat_number+12-1) / 12);
        cout <<((2*(num-1)+1)*12+1)-seat_number<<" "<<seat_type;
        cout <<"\n";
    }
}