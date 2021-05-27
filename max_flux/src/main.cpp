#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

class Edge;
class Node {
public:
    int name;
    vector<Edge>outgoing;
    vector<Edge>ingoing;
    int flow;
    static int num_node;
    
    Node();
    Node(int);
    ~Node();
};
Node::Node(){
    ++num_node;
    name = 0;
    flow = 0;
}
Node::Node(int n){
    ++num_node;
    name = n;
    flow = 0;
}

class Edge{
public:
    Node * source;
    Node * destination;
    int maxflow;
    static int num_edge;

    Edge();
    ~Edge();
};
Edge::Edge(){
    source = nullptr;
    destination = nullptr;
    int maxflow = 1;
    ++num_edge;
}
class Diagram{
    vector<Node> nodes;
    vector<Edge> edges;

public:
  void add_node();
  void add_edge

};

int Node::num_node = 0;
int Edge::num_edge = 0;



/// wałaszka program

int main(){


fstream plik;
plik.open("../../lista_krawedzi.txt", std::ios::in | std::ios::out );
    
if( plik.good() == true )
{
    std::cout << "Uzyskano dostep do pliku!" << std::endl;
    //tu operacje na pliku
} else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;

std::string dane;
getline(plik, dane);
cout<<dane;



plik.close();
}
