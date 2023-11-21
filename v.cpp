#include <iostream>

using namespace std;
void main() 
{
    //REGIONI olaksavaju organizaciju programskog code-a, te ih mozete ukloniti ukoliko vam otezavaju preglednost

    #pragma region TestiranjeKolekcije
    Kolekcija<int, double> kolekcija1;
    for (size_t i = 0; i < 50; i++)
        kolekcija1.AddElement(i, i + 0.3);
    cout << kolekcija1 << endl;
    cout << crt;

    Kolekcija<int, double> kolekcija2;
    kolekcija2 = kolekcija1;
    kolekcija1.RemoveElement(2);//UMANJITI VELIÈINU NIZA
    cout << kolekcija2 << crt;

    if (kolekcija1.getTrenutno() == kolekcija2.getTrenutno())
        cout << "ISTI BROJ ELEMENATA" << endl;

    Kolekcija<int, double> kolekcija3(kolekcija2);
    cout << kolekcija3 << crt;
    #pragma endregion

    #pragma region TestiranjeDatuma
    Datum danas(26, 11, 2015);
    Datum sutra(danas);
    Datum prekosutra;
    prekosutra = danas;
    cout << danas << endl << sutra << endl << prekosutra << crt;
    #pragma endregion

    #pragma region TestiranjeStudenta
    Student denis("Denis Music", Datum(26, 11, 1990));
    Student jasmin("Jasmin Azemovic", Datum(22, 11, 1990));
    Student goran;
    goran = jasmin;
    Student adel("Adel Handzic", Datum(25, 8, 1990));
    Student marija("Marija Herceg", Datum(15, 6, 1990));
    #pragma endregion

    #pragma region TestiranjeIspita
    Ispit prIII("PRIII::26.11.2015", danas);
    //DodajPrijavu - dodaje novog studenta u listu prijavljenih za ispti. 
    //onemoguciti dodavanje dva ista studenta
    if (prIII.DodajPrijavu(denis, danas))
        cout << denis << " DODAT na spisak" << endl;
    if (prIII.DodajPrijavu(jasmin, danas))
        cout << jasmin << " DODAT na spisak" << endl;
    if (prIII.DodajPrijavu(goran, danas))
        cout << jasmin << " DODAT na spisak" << endl;
    if (prIII.DodajPrijavu(adel, danas))
        cout << adel << " DODAT na spisak" << endl;
    if (prIII.DodajPrijavu(marija, danas))
        cout << adel << " DODAT na spisak" << endl;

    cout << crt << endl;
    /*DodajRezultat - dodaje ocjenu koju je student ostvario na ispitu. 
    za dodavanje ocjene student je prethodno trebao biti prijavljen na ispit
    */
    prIII.DodajRezultat(goran, 7);
    prIII.DodajRezultat(jasmin, 6);
    prIII.DodajRezultat(adel, 8);
    prIII.DodajRezultat(marija, 9);

    /*Sortiraj - sortira rezultate ispita prema ocjeni*/
    prIII.Sortiraj();
    /*ZakljuciRezultate - dodaje ocjenu 5 svim studentima koji su prijavili ispit 
    a nije im evidentirana ocjena*/
    prIII.ZakljuciRezultate();
    //rezultati ispita se smiju ispisivati jedino ukoliko su prethodno zakljuèeni
    cout << prIII << crt;

    Ispit prIII_2(prIII);
    cout << prIII_2 << crt;
    #pragma endregion
}
