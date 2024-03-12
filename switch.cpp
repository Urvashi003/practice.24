#include<iostream>
using namespace std;

// int main(){
//     int num =2;
//     cout<<endl;
//     switch(num){
//         case 1: cout<<"first"<<endl;
//         break;
//         case 2: cout<<"second"<<endl;
//         break;
//         case 3: cout<<"third"<<endl;
//         break;
//         default: cout<<"isisis"<<endl;
//     }
//     return 0;
// }

int main(){
    int var1 = 9;
    int var2 = 7;

    //outer switch
    switch(var1){
        case 0: 
        cout<<"00000 "<<endl;
        break;

        case 1:
        cout<<"11111"<<endl;
         //iner switch
        switch(var2){
            case 0:
            cout<<"inner switch 000"<<endl;
            break;
        }
        break;

        default:
        cout<<"----"<<endl;
        break;
    }
}
