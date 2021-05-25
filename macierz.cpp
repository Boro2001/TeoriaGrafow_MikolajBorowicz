//-----------------------------

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int ** A,n,m,i,j,v1,v2;

  // Odczytujemy n i m

  cin >> n >> m;

  // Dynamicznie tworzymy macierz o wymiarze n x m

  A = new int * [n]; // n wierszy

  for(i = 0; i < n; i++) A[i] = new int [m]; // m wyrazów w wierszu

  // Zerujemy macierz

  for(i = 0; i < n; i++)
    for(j = 0; j < m; j++) A[i][j] = 0;

  // Wczytujemy poszczególne krawędzie i umieszczamy informację o nich w macierzy

  for(i = 0; i < m; i++)
  {
    cin >> v1 >> v2;
    A[v1][i] = 1;   // wierzchołek początkowy
    A[v2][i] = -1;  // wierzchołek końcowy
  }

  // Wyświetlamy macierz incydencji

  for(i = 0; i < n; i++)
  {
    cout << endl << setw(2) << i << ":";
    for(j = 0; j < m; j++) cout << setw(3) << A[i][j];
  }

  cout << endl << endl;

  // Usuwamy macierz z pamięci komputera

  for(i = 0; i < n; i++) delete [] A[i];
  delete [] A;

  return 0;
} 