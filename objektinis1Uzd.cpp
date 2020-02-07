#include <iostream>
using namespace std;
int main() {
    string introduction = " Sveikas, ";
    string name;
    cin>>name;
    int n = name.length() + introduction.length() + 5;
    char pirma[n];
    char antra[n+1];
    for(int i = 0; i < n+1; i++){
        pirma[i] = '*';
        if(i>0 && i<n){
            antra[i] = ' ';
        }
    }
    antra[0] = '*';
    antra[n] = '*';
    antra[n+1] = ' ';
    antra[n+2] = ' ';

    if(name[name.length()-1] != 's'){
        introduction = " Sveika, ";
    }

    string trecia = "* " + introduction + name + "!  *";

    cout<<pirma<<endl;
    cout<<antra<<endl;
    cout<<trecia<<endl;
    cout<<antra<<endl;
    cout<<pirma<<endl;
}
