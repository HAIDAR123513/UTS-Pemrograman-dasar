#include <iostream>
using namespace std ;
 
int main() {
    int nomer ;
    
 	cout<<"MOTIVASI HARI INI :)\n\n";
    cout<<"Masukkan [1/2/3] : ";cin>>nomer;
    if (nomer<=0){
        cout<<"kurang dari 1"<<endl;
    }else if(nomer==1){
        cout<<"Tidak peduli hari baik atau buruk, kamu harus tetap berpikir positif\n"<<endl;
    }else if(nomer==2){
        cout<<"Saat kamu sudah punya satu tujuan, kamu sendirilah yang harus memperjuangkannya\n"<<endl;
    }else if(nomer==3){
        cout<<"Karena kamu yang akan menerima hasilnya, pastikan apa yang kamu lakukan adalah kemampuan terbaikmu\n"<<endl;
    }else{
        cout<<"lebih dari 3"<<endl;
    }
    return 0 ;
}
