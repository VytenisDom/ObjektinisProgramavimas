#include "func.h"
/*#include<iostream>
#include<vector>
#include<iomanip>
#include<fstream>
#include <algorithm>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::left;
using std::fixed;
using std::streamsize;
using std::ifstream;
using std::ofstream;
using std::setprecision;
struct mokinys {
    string vardas;
    string pavarde;
    double egzaminas;
    vector<double> nd;
    double vidurkis;
    double mediana;
};
void getAverages(vector<mokinys> &p) {
    double sum = 0;
    for(int i=0; i<p.size(); i++){
        sum = 0;
        for(int j=0; j<p[i].nd.size(); j++){
            sum+=p[i].nd[j];
        }
        p[i].vidurkis = sum/p[i].nd.size();
    }
}

bool compare(const mokinys &first, const mokinys &second){
	return (first.vardas < second.vardas ||
         (first.vardas == second.vardas && first.pavarde < second.pavarde));
}
void getMedians(vector<mokinys> &p) {
    for(int x=0; x<p.size(); x++){
        int n = p[x].nd.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(p[x].nd[i]<p[x].nd[j]){
                    double temp = p[x].nd[i];
                    p[x].nd[i] = p[x].nd[j];
                    p[x].nd[j] = temp;
                }
            }
        }
        if(n%2 == 1){
            p[x].mediana = p[x].nd[n/2];
        } else {
            p[x].mediana = (p[x].nd[n/2] + p[x].nd[(n/2)-1]) / 2;
        }
    }
}
void writeEverything(vector<mokinys> p) {
    ofstream offile ("res.txt");
    offile.width(15);
    offile << left << "Vardas";
    offile.width(15);
    offile << left << "Pavarde";
    offile.width(20);
    offile << left << "Galutinis (Vid.)";
    offile.width(20);
    offile << left << "Galutinis (Med.)"<<endl;

    for (int n = 0; n < 70; n++) offile << "-";
    offile<<endl;
    for(int i=0; i < p.size(); i++) {
        offile.width(15);
        offile << left << p[i].vardas;
        offile.width(15);
        offile << left << p[i].pavarde;
        offile.width(20);
        offile << fixed << setprecision(2) << p[i].vidurkis;
        offile.width(20);
        offile << fixed << setprecision(2) << p[i].mediana<<endl;
    }
}*/
int main() {
    vector<mokinys> p;
    string value;
    double value_d;

    int input = 0;
    cout<<"Pasirinkite ivedimo buda :"<<endl;
    cout<<"0 - ivedimas ranka"<<endl;
    cout<<"1 - ivedimas failu"<<endl;
    cin>>input;
    if(!input){
        for(int i=0;; i++){
            p.push_back(mokinys());
            cout<<"Iveskite "<<i+1<<" mokinio varda"<<endl;
            cin>>value;
            if(value != "0") {
                p[i].vardas = value;
            } else {
                break;
            }
            cout<<"Iveskite "<<i+1<<" mokinio pavarde"<<endl;
            cin>>value;
            if(value != "0") {
                p[i].pavarde = value;
            } else {
                break;
            }
            for(int j=0;; j++){
                cout<<"Iveskite "<<i+1<<" mokinio "<<j<<" namu darbo rezultata"<<endl;
                cin>>value_d;
                if(value_d != 0) {
                    p[i].nd.push_back(double());
                    p[i].nd[j] = value_d;
                } else {
                    break;
                }
            }
            cout<<"Iveskite "<<i+1<<" mokinio egzamino rezultata"<<endl;
            cin>>value_d;
            if(value_d != 0) {
                p[i].egzaminas = value_d;
            } else {
                break;
            }
        }
        p.pop_back();
        getAverages(p);
        getMedians(p);
        sort(p.begin(), p.end(), compare);
        writeEverything(p);
    } else {
        //ifstream infile("studentai10000.txt");
        string value = "";
        infile>>value>>value>>value;
        int nOfNd= 0;
        while(value[0] == 'N'){
            infile>>value;
            nOfNd++;
        }
        cout<<"Reading..."<<endl;
        for(int i=0;;i++){
            //if(i%10000==0) cout<<i<<endl;
            if(infile.eof()) break;
            p.push_back(mokinys());
            infile>>p[i].vardas;
            infile>>p[i].pavarde;
            for(int j=0;j<nOfNd; j++){
                p[i].nd.push_back(double());
                infile>>p[i].nd[j];
            }
            infile>>p[i].egzaminas;
        }
    }
    getAverages(p);
    getMedians(p);
    sort(p.begin(), p.end(), compare);
    writeEverything(p);
}
