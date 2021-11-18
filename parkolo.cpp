#include <string>

using namespace std;

class Auto {
    string rendszam;
    string tipus;

public:
    Auto() = default;
    Auto(const string& rendszam, const string& tipus): rendszam(rendszam), tipus(tipus) {}
};

class Parkolo {
    Auto autok[10];
    unsigned int darabszam = 0;

public:
    Parkolo() = default;

    const Auto *get_autok() const {
        return autok;
    }
};
