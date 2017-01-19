#pragma once
#include <string>

enum class Valuta { Bitcoin, Hackos, Gullmynt };

class Spiller_konto {
private:
    static int konto_count;
    static int spiller_count;
    int konto_id;
    Valuta konto_type;
    std::string spiller_navn;
    int spiller_id;
    int beholdning;

public:
    Spiller_konto();
    Spiller_konto(std::string, Valuta);
    ~Spiller_konto();

    inline void set_navn(std::string navn) { this->spiller_navn = navn; };
    inline std::string get_navn() { return this->spiller_navn; };
    inline int get_id() { return this->konto_id; };
    inline int get_beholdning() { return this->beholdning; };

    void innskudd(int);
    void innskudd(int, int);
    int uttak(int);
    int uttak(int, int);
};
