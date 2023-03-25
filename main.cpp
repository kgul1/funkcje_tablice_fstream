#include <iostream>
#include <fstream>
using namespace std;

int main() {
   int tablica[5];
   int tablica1[5];
    int poprawne =1;
   int n;
   cout<<"ile liczb chcesz dac do tablicy?";
   cin>>n;
    for (int i = 0; i <n; i++) {
        cout<<"podaj "<<i+1<<" liczbe: ";
        cin>>tablica[i];
    }
    for (int i = 0; i <n; i++) {
        cout<<"podaj "<<i+1<<" liczbe: ";
        cin>>tablica1[i];
    }
    fstream plik;
  plik.open("takiplik.txt",ios::out);//pisanie czygos
    if(plik.is_open())  {
      cout<<"poprawnie otwarto plik \n";
      plik<<"pierwsza tablica: ";
        for (int i = 0; i <n; i++){
            plik<<tablica[i]<<" ";
        }
        plik<<"\ndruga tablica: ";
        for (int i = 0; i < n; ++i) {
            plik<<tablica1[i]<<" ";
        }
    }
  else{
        cout<<"nie moge otworzyc badz stworzyc pliku";
  }
plik.close();
        for (int i = 0; i <n ; ++i) {
            if (tablica[i] != tablica1[i]) poprawne=0;

        }
        if(poprawne){
        cout<<"te dwie tablice maja identyczne liczby ";
        }
        else   {
            cout<<"te dwie tablice nie maja identycznych liczb";
        }

    return 0;
}
