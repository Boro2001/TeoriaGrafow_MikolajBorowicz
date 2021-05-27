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
    name = num_node;
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
  void add_edge(int, int, int);
  void add_nodes(int);
  int find_max_flux(int, int);

};
void Diagram::add_node(){
    Node new_node;
    nodes.push_back(new_node);
}
void Diagram::add_nodes(int how_many){
    for(int i=0;i<how_many;++i) add_node();
    cout<<how_many << " nodes has been addted to Diagraph\n";
}
void Diagram::add_edge(int s, int d, int w){
    Edge new_edge;
    new_edge.source = &(nodes[s]);
    new_edge.destination = &(nodes[d]);
    nodes[s].outgoing.push_back(new_edge);
    nodes[d].ingoing.push_back(new_edge);
    new_edge.maxflow = w; 
    cout<<s<<" to "<<d<< " max-flux: "<< w<<" edge added\n";
}
int Diagram::find_max_flux(int source, int destination){
    int sum = 0;
    // relaxation - go as deep as you find destination, and then relax the path and add relaxation difference to the sum
    Node * pt1 = &nodes[source];Node * previous = pt1;
    Node * pt2 = &nodes[destination];
    while(true){
        previous = pt1;
    }

}

int Node::num_node = 0;
int Edge::num_edge = 0;


int main(){


fstream plik;
plik.open("../../lista_krawedzi.txt", std::ios::in | std::ios::out );
    
if( plik.good() == true )
{
    std::cout << "Uzyskano dostep do pliku!" << std::endl;
    //tu operacje na pliku
} else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;
plik.close();


}
