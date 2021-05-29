#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

void print_table(int n, int *t){
    for(int i=0;i<n;++i)cout<<t[i];
    cout<<"\n";
}

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
  void print_edges();
  void print_nodes();
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
    new_edge.source = nodes.data() + s;
    new_edge.destination = nodes.data()+d;
    nodes[s].outgoing.push_back(new_edge);
    nodes[d].ingoing.push_back(new_edge);
    new_edge.maxflow = w;
    edges.push_back(new_edge);

}
void Diagram::print_edges() {
    for(auto & edge : edges)cout<<edge.source->name<<">>" <<edge.destination->name << "   "<< edge.maxflow << "`````````"<<edge.num_edge<<"\n";
}
void Diagram::print_nodes() {
    for(auto & node : nodes)cout<<node.name<<"   " <<node.flow << "   \n";
}

int Diagram::find_max_flux(int source, int destination, int n, int e){
    int sum = 0;

    int * path = new int [n];
    int * previous = new int [n];

    for(int i = 0;i<n;++i)path[i]=-1;
    int a =0, relax = 0;
    bool flag = true;

    while (flag)
    {
        relax = bfs(0,path,source,destination);
        print_table(n,path);
        for(int i = 0;i<n;++i){
            if(path[i]==-1){
                a=i;
                break;
                }
            }
        if(relax==-1)flag = false;
        /*bool non = true;
        for(int i = 0;i<n;++i)if(previous[i]!=path[i]) non= false;
        if(non)break;*/

        update_edges(a,path,relax);
        print_edges();
        sum+=relax;
        cout<<"relax="<<relax<<"\n";

        for(int i = 0;i<n;++i){previous[i]= path[i];path[i]=0;}
    }
}

int Diagram::bfs(int len, int * path, int start, int destination){
    Node current_node = nodes[start];
    cout<<"new node added to path: " << start <<"\n";
    path[len] = start; // dodanie obecnego noda do sciezki
    if(start==destination){return 1000;}
    for(auto & edge : current_node.outgoing)
    {
        bool flag = true;
        if(edge.maxflow<=0)flag = false;
        for(int i = 0;i < len;++i){
            if(edge.destination->name==path[i]) flag = false; // jesli 
        }

        if(flag){
            int bottleneck = bfs(len+1,path,edge.destination->name,destination);
            if(edge.maxflow < bottleneck) return edge.maxflow;
            //for(int i=0;i<11;i++)cout<<". "<<path[i]<<". ";
            else return bottleneck;
        }

    }
    print_table(len+1,path);
    //for(int i=0;i<len+1;++i)cout<<path[i];
    return -1; // czyli w przypadku gdy żaden nowy wierzchołek nie może być odwiedzony

}
void Diagram::update_edges(int len, int * path,int relax){
    for(int i = 0; i< len-1; ++i){
        cout<<path[i]<<"~~~~~"<<path[i+1]<<"\n\n";
        int size = edges.size();
        for(int j = 0;j<size;++j){
            if(path[i]==edges[j].source->name&&path[i+1]==edges[j].destination->name){
                if(edges[j].maxflow -=relax==0){
                    edges.erase(edges.begin()+j);
                    j--;
                }
                else edges[j].maxflow -= relax;
                cout<<"the edge : "<<edges[j].source->name << " " <<edges[j].destination->name<<" has been relax with : " << relax <<"\n";
            }
        }
        /*for(auto & j : edges){
            if(path[i]==j.source->name&&path[i+1]==j.destination->name){
                j.maxflow = j.maxflow - relax;
                cout<<"the edge : "<<j.source->name << " " <<j.destination->name<<" has been relax with : " << relax <<"\n";

            }
        }
         */
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

    graph.print_nodes();
    graph.print_edges();

    cout<<" "<<graph.find_max_flux(1,4,11,6)<<" ";//gdzieś w pętlach warunek ucieka
    return 0;
}
