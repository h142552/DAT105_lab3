#pragma once
#include "spiller_konto.h"

class Spill_transaksjoner {
    private:
        int transaksjon_id;
        int fra_id;
        int til_id;
        int belop;
    public:
        Spill_transaksjoner(Spiller_konto&, Spiller_konto&, int);
        ~Spill_transaksjoner();
        
};
