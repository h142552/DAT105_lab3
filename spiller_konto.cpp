#include "spiller_konto.h"

/* 
 * TODO
 * sjekk kontotype
 * bitcoins har upper limit
 *
 */

int Spiller_konto::konto_count = 0;
int Spiller_konto::spiller_count = 0;

Spiller_konto::Spiller_konto() {
    this->beholdning = 0;
    this->konto_id = Spiller_konto::konto_count++;
    this->spiller_id = Spiller_konto::spiller_count++;
}

Spiller_konto::~Spiller_konto() {}

Spiller_konto::Spiller_konto(std::string navn, Valuta val) {
    this->spiller_navn = navn;
    this->konto_type = val;

    this->beholdning = 0;
    this->konto_id = Spiller_konto::konto_count++;
    this->spiller_id = Spiller_konto::spiller_count++;
}

void Spiller_konto::innskudd(int innskudd) {
    this->beholdning += innskudd;
}

int Spiller_konto::uttak(int uttak) {
    if(this->beholdning - uttak > 0)
        this->beholdning -= uttak;
    else {
        uttak = this->beholdning;
        this->beholdning = 0;
    }

    return uttak;
}

Spiller_konto& Spiller_konto::operator+(Spiller_konto& rhs) {
    this->innskudd(rhs.uttak(rhs.get_beholdning()));
    return *this;

}
