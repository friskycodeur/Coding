#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
    int num;
    cin >> num;
    int COG[num],COP[num];
    int NOU[num];
    int res,res1,res2;
    for(int i=0;i<num;i++){
        res=0;
        res1=0;
        res2=0;
        cin >> COG[i] >> COP[i];
        cin >> NOU[i];
        int num_of_ballons[NOU[i]][2];
        for(int k=0;k<NOU[i];k++){
            for(int j=0;j<2;j++){
                cin >> num_of_ballons[k][j];
            }
            res1=res1+((COG[i]*num_of_ballons[k][0])+(COP[i]*num_of_ballons[k][1]));
            res2=res2+((COP[i]*num_of_ballons[k][0])+(COG[i]*num_of_ballons[k][1]));    
            res=(res1>res2)?res2:res1;
        }
        cout << res << "\n";
    }
    return 0;
}