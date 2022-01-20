#include <iostream>
#include <string>

using namespace std;


class Rower {
public:
    const string numerSeryjny;
    int wielkosc{};
    string stan;
    float cena{};
    int *wsk{nullptr};

    /*Rower(){
                //konstruktor ktory kompilator tworzy domyslnie
    }
    ~Rower() {
                //destruktor ktory kompilator tworzy domyslnie
    } */
    /*
    Rower()=default; //Tworzy sie konstruktor domniemany, pomimo ze jest jakis inny
    */
    /*
    Rower() {
        cout << "Konstruktor domniemany\n";
        wsk = new int[1000];
        cout << "Rezerwacja " << wsk << endl;
    };
    Rower(int w) {
        wielkosc=w;
        cout<<"Konstruktor jednoparametrowy\n";
    };
    ~Rower() {
        cout<<"Destruktor zadzialal\n";
        cout << "Zwalnianie rezerwacji " << wsk << endl;
        delete[] wsk;

    }*/
    Rower(string ns,int w=24,string s="Brak danych", float c=999.99): numerSeryjny{ns},wielkosc{w},stan{s},cena{c}{}

    ~Rower() {
    }
};

int main()
{
    Rower wigry("abc0001", 99);
    cout << wigry.wielkosc << endl;
    cout << wigry.stan << endl;
    cout << wigry.cena << endl;
    cout << wigry.numerSeryjny << endl;
    return 0;
}
