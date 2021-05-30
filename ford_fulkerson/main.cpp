#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>  

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
int get_len(int n, int * path){
    for(int i = 0;i<n;++i){

        if(path[i]==-1) {return i;}
    }
}
void zero_path(int n, int * path){
    for(int i = 0;i<n;++i)
        path[i]=-1;
}
void insert_edge(int source, int destination, int capacity, int ** table){
    table[source][destination] = capacity;
}
void insert_edge(int source, int destination, int ** table){
    table[source][destination] = 1;
}
int dfs(int source, int destination, int ** table, int n, int *path, int m){

    path[m] = source;
    if(destination == source) 
        return 1000;
    for(int i = 0;i<n;++i){
       bool a = true;
       for(int j = 0;j<n;++j){
           if(table[source][i]<=0||path[j]==i){
               a = false;
           }
       }
       if(a){
           int min = 0;
           int recursive = dfs(i,destination,table,n,path,m+1);
           if(table[source][i]<recursive){
               min = table[source][i];
           } 
           else{
               min = recursive;
           }
           return min;
       }
    }
    return -1;
}
void update_edges(int relax, int *path, int **table, int n, int m){
    for(int i = 0;i<m-1;++i){
        table[path[i]][path[i+1]]-= relax;
    }
    //print_table(n,table);
}
void update_last_edge(int *path, int **table, int n, int m){
    table[path[m-2]][path[m-1]] = 0;
}
int find_max_flux(int n, int e, int source, int destination){
    
    int **tab = new int*[n];
    for(int i = 0; i < n; ++i)
        tab[i] = new int[n];

    int * path = new int[n];
    for(int i = 0; i < n; ++i)
        path[i]=-1;

    zero_table(n,tab);

    std::fstream plik;
    plik.open( "lista_krawedzi.txt", std::ios::in | std::ios::out );
    if( plik.good() == true ){
        plik>>n>>e;
        for(int i = 0;i<e;++i){
            int first = 0, second = 0;
            plik>>first>>second;
            cout<< first <<"->"<<second<<"  ";
            insert_edge(first, second, 1, tab); 
    }
    }

   
    print_table(n,tab);
    
    int max_flow = 0;
    for(int i = 0;i<100;++i){
        int relax = dfs(0,8,tab,n,path,0);
        int len = get_len(n, path);
        if(relax==-1) {
            //update_edges(100,path,tab,n,len);
            update_last_edge(path, tab,n,len);
            }
        else{
            update_edges(relax,path,tab,n,len);
            max_flow+=relax;
        }
        zero_path(n,path);
    }

    cout<<"maxflow : "<<max_flow;

    for(int i = 0; i < n; ++i) 
        delete [] tab[i];
    delete [] tab;
    plik.close();
    return max_flow;
}
int main(){
    
    int source = 0;
    int destination = 0;
    start:;
    cout<<"input source: \n";cin>>source;
    cout<<"input destination: \n";cin>>destination;
    if(source>11 || destination > 11)goto start;
    int maxflux = find_max_flux(11,58,source,destination);
    
    return 0;

}
