#include "func_vec.h"
void mokinys::getAverages(vector<mokinys> &p) {
    auto start = std::chrono::steady_clock::now();
    cout<<"Calculating averages..."<<endl;
    double sum = 0;
    for(int i=0; i<p.size(); i++){
        sum = 0;
        for(int j=0; j<p[i].nd.size(); j++){
            sum+=p[i].nd[j];
        }
        p[i].vidurkis = 0.4 * (sum/p[i].nd.size()) + 0.6 * p[i].egzaminas;
    }
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}

bool compare(const mokinys &first, const mokinys &second){
	return (first.vardas < second.vardas ||
         (first.vardas == second.vardas && first.pavarde < second.pavarde));
}
void mokinys::getMedians(vector<mokinys> &p) {
    cout<<"Calculating medians..."<<endl;
    auto start = std::chrono::steady_clock::now();
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
            p[x].mediana = 0.4 * (p[x].nd[n/2]) + 0.6 * p[x].egzaminas;
        } else {
            p[x].mediana = 0.4 * ((p[x].nd[n/2] + p[x].nd[(n/2)-1]) / 2) + 0.6 * p[x].egzaminas;
        }
    }
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}
int numOfDigits(int number){
    int output = 0;
    if(number == -1){
        output = 0;
    } else if(number==0){
        number=1;
    }
    while(number>0){
        number=number/10;
        output++;
    }
    return output;
}
void generateInputFile(int nOfNd, int nOfStudents){
    auto start = std::chrono::steady_clock::now();
    int temp = -1;
    string name = "Vardas";
    string surname = "Pavarde";
    string nd = "ND";
    srand(time(NULL));

    ofstream rOffile;
    cout<<"Generating..."<<endl;
    rOffile.open("randomized_input.txt");
    rOffile << setw(20) << left << name << setw(20) << left << surname;
    for(int i=1; i< nOfNd+1; i++){
        rOffile << setw(5) << right << nd << i ;
    }
    rOffile << setw(10) << right << "Egz." << endl;
    for(int i=0; i<nOfStudents; i++){
        rOffile << right <<  name << i;
        rOffile << setw(20-numOfDigits(i)) << right;
        rOffile << surname << i;

        for(int j=0; j<nOfNd; j++){
            if(j==0){
                rOffile << setw(18-numOfDigits(i)) << right;
            }
            else{
                rOffile << setw(6) << right;
            }
            rOffile  << rand() % 10 + 1;
        }
        rOffile << setw(6) << right << rand() % 10 + 1;
        if(i != nOfStudents-1) {
            rOffile<<endl;
        }
    }
    rOffile.close();
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}
void mokinys::readFromFile (vector<mokinys> &p, string inputFileName) {
    auto start = std::chrono::steady_clock::now();
    inputFileName+=".txt";
    ifstream infile (inputFileName);
    string value = "";
    infile>>value>>value>>value;
    int nOfNd= 0;
    while(value[0] == 'N'){
        infile>>value;
        nOfNd++;
    }
    cout<<"Reading from file..."<<endl;
    for(int i=0;;i++){
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
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}
void mokinys::sortByCool(vector<mokinys> &k, vector<mokinys> &l, vector<mokinys> &p) {
    auto start = std::chrono::steady_clock::now();
    cout<<"Splitting students..."<<endl;
    for(int i=0; i<p.size(); i++) {
        if(p[i].vidurkis >= 5) {
            k.push_back(p[i]);
        } else {
            l.push_back(p[i]);
        }
    }
    p.clear();
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}
void mokinys::writeEverything(vector<mokinys> k, vector<mokinys> l) {
    auto start = std::chrono::steady_clock::now();
    cout<<"Writing..."<<endl;
    ofstream offile_k ("kietekai.txt");
    offile_k<<k;

    ofstream offile_l ("lievakai.txt");
    offile_l<<l;
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}
ostream& operator<<(ostream& os, vector<mokinys> &vec){
    os.width(15);
    os << left << "Vardas";
    os.width(15);
    os << left << "Pavarde";
    os.width(20);
    os << left << "Galutinis (Vid.)";
    os.width(20);
    os << left << "Galutinis (Med.)"<<endl;
    for (int n = 0; n < 70; n++) os << "-";
    os<<endl;
    for(int i=0; i < vec.size(); i++) {
        os.width(15);
        os << left << vec[i].vardas;
        os.width(15);
        os << left << vec[i].pavarde;
        os.width(20);
        os << fixed << setprecision(2) << vec[i].vidurkis;
        os.width(20);
        os << fixed << setprecision(2) << vec[i].mediana<<endl;
    }
    return os;
}
/*ostream& operator+=(vector<mokinys> &main_vec, mokinys vec){
    main_vec.push_back(vec);
    return main_vec;
}*/
