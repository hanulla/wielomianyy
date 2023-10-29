#include <iostream>

using namespace std;

int dodawanie() {

  double stopien1, stopien2, w;

  cout << "Podaj najwy¿szy stopien pierwszego wielomianu \n";
  cin >> stopien1;
  cout << "Podaj najwy¿szy stopien drugiego wielomianu \n";
  cin >> stopien2;

  double tab1[100], tab2[100];

  // Czyszczenie tabów,,
  for (int Z = 100; Z >= 0; Z--) {
    tab1[Z] = 0;
    tab2[Z] = 0;
  }
  // ===============

  cout << "Wpisz wspolczynniki pierwszego wielomianu";
  for (int x = stopien1; x >= 0; x--) {
    cin >> tab1[x];
    if (tab1[x] != 0) {
      cout << tab1[x];
      if (x > 1)
        cout << "x^" << x << "  +  ";
      else {
        cout << "x^" << x;
        break;
      }
    }
  }
  cout << endl;
  cout << "Wpisz wspolczynniki drugeigo wielomianu";
  for (int y = stopien2; y >= 0; y--) {
    cin >> tab2[y];
    if (tab2[y] != 0) {
      cout << tab2[y];
      if (y > 1)
        cout << "x^" << y << "  +  ";
      else {
        cout << "x^" << y;
        break;
      }
    }
  }
  cout << endl;
  // DODAWANIE WIELOMIANOW
  cout << "Suma wynosi" << endl << endl;
  int G;
  if (stopien1 >= stopien2) {
    for (int G = 1; G <= stopien1; G++) {
      cout << tab1[G] + tab2[G];
      cout << "x^" << G << "  +  ";
    }
  } else {
    for (int G = 1; G <= stopien2; G++) {
      cout << tab1[G] + tab2[G];
      cout << "x^" << G << "  +  ";
    }
  }
}

int odejmowanie() {
  // input
  double stopien1, stopien2, w;

  cout << "Podaj stopien pierwszego wielomianu \n";
  cin >> stopien1;
  cout << "Podaj stopien drugiego wielomianu \n";
  cin >> stopien2;

  double tab1[100], tab2[100];

  // Czyszczenie tabów
  for (int Z = 100; Z >= 0; Z--) {
    tab1[Z] = 0;
    tab2[Z] = 0;
  }
  // ===============

  cout << "Wpisz wspolczynniki pierwszego wielomianu";
  for (int x = stopien1; x >= 0; x--) {
    cin >> tab1[x];
    if (tab1[x] != 0) {
      cout << tab1[x];
      if (x > 1)
        cout << "x^" << x << "  +  ";
      else {
        cout << "x^" << x;
        break;
      }
    }
  }
  cout << endl;
  cout << "Wpisz wspolczynniki drugiego wielomianu";
  for (int y = stopien2; y >= 0; y--) {
    cin >> tab2[y];
    if (tab2[y] != 0) {
      cout << tab2[y];
      if (y > 1)
        cout << "x^" << y << "  +  ";
      else {
        cout << "x^" << y;
        break;
      }
    }
  }
  cout << endl;
  // ODEJMOWANIE

  cout << endl << "Roznica wynosi" << endl << endl;
  ;
  int G;
  if (stopien1 >= stopien2) {
    for (int G = 1; G <= stopien1; G++) {
      cout << tab1[G] - tab2[G];
      cout << "x^" << G << "  +  ";
    }
  } else {
    for (int G = 1; G <= stopien1; G++) {
      cout << tab1[G] - tab2[G];
      cout << "x^" << G << "  +  ";
    }
  }
}

int mnozenie() {

  double stopien1, stopien2, w;

  cout << "Podaj najwiekszy stopien pierwszego wielomianu \n";
  cin >> stopien1;
  cout << "Podaj najwiekszy stopien drugeigo wielomianu \n";
  cin >> stopien1;

  double tab1[100], tab2[100];

  // Czyszczenie tabów
  for (int Z = 100; Z >= 0; Z--) {
    tab1[Z] = 0;
    tab2[Z] = 0;
  }
  // ===============

  cout << "Wpisz wspó³czynniki pierwszego wielomianu";
  for (int x = stopien1; x >= 0; x--) {
    cin >> tab1[x];
    if (tab1[x] != 0) {
      cout << tab1[x];
      if (x > 1)
        cout << "x^" << x << "  +  ";
      else {
        cout << "x^" << x;
        break;
      }
    }
  }
  cout << endl;
  cout << "Wpisz wspolczynniki drugiego wielomianu";
  for (int y = stopien2; y >= 0; y--) {
    cin >> tab2[y];
    if (tab2[y] != 0) {
      cout << tab2[y];
      if (y > 1)
        cout << "x^" << y << "  +  ";
      else {
        cout << "x^" << y;
        break;
      }
    }
  }
  cout << endl;
  // MNOZENIE

  cout << "iloczyn wynosi" << endl;

  int i = 0;
  int c[100];

  for (int r = stopien1; r >= 0; r--) {
    for (int t = stopien2; t >= 0; t--) {
      c[i] = tab1[r] * tab2[t];

      if (c[i] != 0) {
        cout << c[i];
        if (r + t > 0)
          cout << "x^" << r + t << "  +  ";
      }
      i++;
    }
  }

  return 0;
}
