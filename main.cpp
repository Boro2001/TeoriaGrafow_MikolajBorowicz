#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

void zero_table(int n, int ** table){
    for(int i = 0;i<n;++i)
        for(int j=0;j<n;++j)
            table[i][j] = 0;
}

void print_table(int n, int ** table){
    for(int i = 0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<table[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void print_path(int n, int * path){
    for(int i = 0;i<n;++i)
        cout<<path[i]<<" ";
        cout<<"\n";
}
void insert_edge(int source, int destination, int capacity, int ** table){
    table[source][destination] = capacity;
}
void insert_edge(int source, int destination, int ** table){
    table[source][destination] = 1;
}
int dfs(int source, int destination, int ** table, int n, int *path){
    int sum = 0;
    if(destination == source) return 1000;
    for(int i = 0;i<n;++i){
       bool a = true;
    }
}
int main(){
    
    int sizeY = 11, sizeX = 11;

   
    int **tab = new int*[sizeY];
    for(int i = 0; i < sizeY; ++i)
        tab[i] = new int[sizeX];

    zero_table(11,tab);
    insert_edge(0, 5, 11,tab);
    insert_edge(0, 8, 11, tab);
    print_table(11,tab);

    


    for(int i = 0; i < sizeY; ++i) 
        delete [] tab[i];
    delete [] tab;
    return 0;
     
}
