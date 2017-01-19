#include "spiller_konto.h"
#include "spill_transaksjoner.h"
#include <iostream>
#include <vector>
using namespace std;

void print_vector(std::vector<Spiller_konto>);

int main() {
    std::vector<Spiller_konto> v;
    Spiller_konto spiller {"Sigbjørn Myhre", Valuta::Bitcoin};
    spiller.innskudd(1000);

    v.push_back(spiller);
    v.push_back(Spiller_konto {"Ola Nordmann", Valuta::Bitcoin});
    v.push_back(Spiller_konto {"Kari Nordmann", Valuta::Bitcoin});
    v.push_back(Spiller_konto {"John Doe", Valuta::Bitcoin});
    print_vector(v);

    Spill_transaksjoner {v.at(0), v.at(1), 500};
    Spill_transaksjoner {v.at(1), v.at(2), 250};
    Spill_transaksjoner {v.at(0), v.at(3), 600};
    print_vector(v);

    v.at(1) + v.at(3);
    print_vector(v);

    return 0;
}

void print_vector(std::vector<Spiller_konto> v) {
    for(auto n : v) {
        cout << n.get_navn() << "\t";
        cout << n.get_id() << " ";
        cout << n.get_beholdning() << " ";
        cout << endl;
    }
}
