#include <iostream>
using namespace std;
int main() {
int x,i,num=0;

    cout<<"Adad Khod Ra Vared Konid!\n";
    cin>>x;

    if(x==1) {
        cout<<"1 Akhe Mard Hesaabi? |:";
        return 0;
    }

    if(x<0) {
        cout<<"Adad Manfi Poshtibaani Nemishavad!";
        return 0;
    }

    for( i=2 ; i<x && num==0 ; i++) {
        if(x%i==0) {
            num=num+1;
        }
    }

    if(num==0) {
        cout<<"Adad Avval Ast (:";
    }

    else {
        cout<<"Adad Avval Nist ):";
    }


}


/*
Ali Nikdasti
Dar in code adad "1" barresi nemishavad zira taklif aan moshakhas ast!
Adad manfi niz poshtibaani nemishavad!
*/