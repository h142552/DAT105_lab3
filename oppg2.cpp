#include "Spiller_konto.h"
#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<Spiller_konto>);

int main() {
    std::vector<Spiller_konto> v;
    Spiller_konto spiller {"Sigbjørn Myhre", Valuta::Bitcoin};
    spiller.innskudd(1000);

    v.push_back(spiller);
    v.push_back(Spiller_konto {"Ola Nordmann", Valuta::Bitcoin});
    v.push_back(Spiller_konto {"Kari Nordmann", Valuta::Bitcoin});
    v.push_back(Spiller_konto {"John Doe", Valuta::Bitcoin});

    print_vector(v);

    return 0;
}

void print_vector(vector<Spiller_konto> v) {
    for(auto n : v) {
        cout << n.get_navn() << "\t";
        cout << n.get_id() << " ";
        cout << n.get_beholdning() << " ";
        cout << endl;
    }
}
