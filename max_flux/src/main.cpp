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
};
Node::Node(){

    name = num_node++;
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
  int find_max_flux(int, int, int, int);
  int bfs(int, int *, int, int );
  void update_edges(int, int *, int);

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
    cout<<s<<" to "<<d<< " max-flux: "<< w<< "adress of source node" << &(nodes[s]) << "adress of destination node " << &(nodes[d]) <<" edge added\n";
}
int Diagram::find_max_flux(int source, int destination, int n, int e){
    int sum = 0;
    // relaxation - go as deep as you find destination, and then relax the path and add relaxation difference to the sum
    int * path = new int [n];
    for(int i = 0;i<n;++i)path[i]=-1;

    int len = 0,a =0, relax = 0 ;
    bool flag = true;
    while (flag)
    {
        relax = bfs(0,path,source,destination);
        for(int i = 0;i<n;++i)cout<<path[i];
        if(relax==-1){
            cout<<"japierdziele";
            flag=false;return sum;
            break;
        }
         
        for(int i = 0;i<n;++i){
            cout << path[i];
            if(path[i]==-1){
                a=i;
                cout<<"---"<<a<<"---";
                break;
                }    
        }

        update_edges(a,path,relax);
        sum+=relax;
        for(int i = 0;i<n;++i)path[i]=0;
    }
}
int Diagram::bfs(int len, int * path, int start, int destination){
    Node current_node = nodes[start];
    cout<<"new node added to path: " << start <<"\n";
    path[len] = start; // dodanie obecnego noda do sciezki
    if(start==destination){return 1000;cout<<"@@";} //przepustowosc
    for(auto & edge : current_node.outgoing)
    {
        bool flag = true;
        if(edge.maxflow==0)flag = false;
        for(int i = 0;i < len;++i){
            if(edge.destination->name==path[i]) flag = false; // jesli 
        }

        if(flag) {
            int bottleneck = bfs(len+1,path,edge.destination->name,destination);
            if(edge.maxflow < bottleneck) return edge.maxflow;
            cout<<"--"<<edge.destination->name<<" ";
            return bottleneck;
        }
    }
    return -1; // czyli w przypadku gdy żaden nowy wierzchołek nie może być odwiedzony
}
void Diagram::update_edges(int len, int * path,int relax){
    for(int i = 0; i< len-1; ++i){
        for(auto & edge : edges){
            if(edge.source->name==path[i] && edge.destination->name==path[i+1]) {
                edge.maxflow-=relax;
                cout<<"the edge : "<<edge.source->name << " " <<edge.destination->name<<" has been relax with : " << relax <<"\n";
                }
        }
    }

}

int Node::num_node = 0;
int Edge::num_edge = 0;


int main(){

    Diagram graph;
    graph.add_nodes(11);
    graph.add_edge(0,1,4);
    graph.add_edge(1,2,5);
    graph.add_edge(2,3,5);
    graph.add_edge(3,4,10);
    graph.add_edge(4,5,10);
    graph.add_edge(1,6,10);
    cout<<" "<<graph.find_max_flux(1,4,11,7)<<" ";//gdzieś w pętlach warunek ucieka

}
