# TeoriaGrafow_MikolajBorowicz

W Pliku Diagram1.pdf znajduje się szkic grafu
W Pliku Graph.pdf znajdują się rozwiązania do zadań analitycznych
W Pliku lista_sasiedztwa.pdf znajduje się lista_sasiedztwa
W Pliku macierz_incydencji.pdf znajduje się macierz_incydencji

Algorytm który implementowałem opiera się na przeszukiwaniu w głąb, w odróżnieniu od algorytmu Edmondsa-Karpa który wykorzystuje przeszukiwanie w głąb.
Algorytm wykorzystuje relaksację dla połączeń które łączą źródło z ujściem. dodatkowo w momoencie gdy dana "odnoga" ścieżki nie pozwala na połączenie się z ujściem, to zostaje usunięta.
Pesymistyczny czas działania algorytmu jest rzędu (E^2 * V) czyli dla sytuacji dla której byśmy mieli graf, w którym jest połączony każdy wierzchołek z każdą

Aby uruchomić algorytm należy:
-wejść do kat. ford_fulkerson
-wykonać polecenie g++ main.cpp
-wykonać polecenie ./a.out

Zastosowanie metody Forda-Fulkersona: 
- rozwiązanie problemu maksymalnego przepływu ma zastosowanie w komunikacji i telekomunikacji między innymi - (stosują je firmy spedytorskie, linie lotnicze, miasta przy planowaniu infrastruktury)
- ciekawszwsze, mniej intuicyjne zastosowanie - eliminajna drużyn baseballowych w lidze
- bankowość - do zmaksymalizowania ilości pożyczek osobom przywatnym, placówki są w tym modelu węzłami a krawędzie symbolizują przepłw finansów
- biznes - zastosowanie do przydziału zadań; dąży się do zmaksymalizowania efektywności zespołów w kŧórych osoby mają określone kompetencje 
