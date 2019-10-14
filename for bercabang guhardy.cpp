#include <iostream>
using namespace std;

int main()
{
    int banyak = 0;
    cout<<"Berapa banyak : ";cin>>banyak;
    for(int i=1;i<=banyak;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
