#include "spill_transaksjoner.h"

// TODO transaksjonsid
Spill_transaksjoner::Spill_transaksjoner(Spiller_konto& fra, Spiller_konto& til, int belop) {
    this->fra_id = fra.get_id();
    this->til_id = til.get_id();
    this->belop = belop;

    til.innskudd(fra.uttak(belop));
}

Spill_transaksjoner::~Spill_transaksjoner() {}
