#include <iostream>
#include <string>
using namespace std;
struct lines {
    string pirma;
    string antra;
    string trecia;
};
int main() {
    string introduction = " Sveikas, ";
    string name;
    int height;

    cout<<"Iveskite varda"<<endl;
    cin>>name;
    cout<<"Iveskite remelio auksti"<<endl;
    cin>>height;

    int n = name.length() + introduction.length() + 5;
    lines l;
    if(height <= 5){
        height = 5;
    }

    if(height%2 == 0){
        height-=1;
    }

    l.antra.append("*");
    for(int i = 0; i < n+1; i++){
        l.pirma.append("*");
        if(i>0 && i<n){
            l.antra.append(" ");
        }
    }
    l.antra.append("*");

    if(name[name.length()-1] != 's'){
        introduction = " Sveika,  ";
    }


    l.trecia = "* " + introduction + name + "!  *";
    cout<<l.pirma<<endl;
    for(int i=0; i < (height-3)/2; i++){
        cout<<l.antra<<endl;
    }
    cout<<l.trecia<<endl;
    for(int i=0; i < (height-3)/2; i++){
        cout<<l.antra<<endl;
    }
    cout<<l.pirma<<endl;
}
