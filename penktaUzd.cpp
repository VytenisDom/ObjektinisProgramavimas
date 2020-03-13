#include "func.h"
int main() {
    deque<mokinys> p;
    deque<mokinys> k;
    deque<mokinys> l;

    int input = 0;
    cout<<"Pasirinkite ivedimo buda :"<<endl;
    cout<<"0 - ivedimas ranka"<<endl;
    cout<<"1 - ivedimas failu"<<endl;
    cout<<"2 - ivedimas random failu"<<endl;
    cin>>input;
    if(!input){
        string value;
        double value_d;
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
        sortByCool(k, l, p);
        writeEverything(k, l);
    } else if (input == 1) {
        string inputFileName = "";
        cout<<"Prasome pateikti failo pavadinima"<<endl;
        cin>>inputFileName;
        readFromFile(p, inputFileName);
        getAverages(p);
        getMedians(p);
        cout<<"Sorting..."<<endl;
        sort(p.begin(), p.end(), compare);
        sortByCool(k, l, p);
        writeEverything(k, l);
        cout<<"Done."<<endl;
    } else {
        auto start_main = std::chrono::steady_clock::now();
        int nOfNd = 0;
        int nOfStudents = 0;
        cout<<"Iveskite namu darbu kieki: "<<endl;
        cin>>nOfNd;
        cout<<"Iveskite studentu kieki: "<<endl;
        cin>>nOfStudents;
        generateInputFile(nOfNd, nOfStudents);
        readFromFile(p, "randomized_input");
        getAverages(p);
        getMedians(p);
        cout<<"Sorting..."<<endl;
        auto start = std::chrono::steady_clock::now();
        sort(p.begin(), p.end(), compare);
        auto ending = std::chrono::steady_clock::now();
        cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
        sortByCool(k, l, p);
        writeEverything(k, l);
        auto ending_main = std::chrono::steady_clock::now();
        cout<<"Done. Time elapsed : "<<std::chrono::duration <double, milli>(ending_main - start_main).count()<<" ms"<<endl;
    }
}
