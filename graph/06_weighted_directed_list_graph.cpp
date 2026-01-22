#include<iostream>
#include<vector>
using namespace std;

class WeightedDirectedGraph{
    private: 
    vector<vector<pair<int,int>>> adjlist;
    vector<int> vertices;

    int findVertex(int v){
        for(int i=0; i<vertices.size(); i++){
            if(vertices[i] == v)
                return i;
        }
        return -1;
    }

    void addVertex(int v){
        if(findVertex(v) == -1){
            vertices.push_back(v);
            adjlist.push_back(vector<pair<int,int>>());
        }
    }

    public:
    void addEdge(int src,int dest,int weight){
        addVertex(src);

        int srcIndex = findVertex(src);

        adjlist[srcIndex].push_back({dest,weight});
    }

    void printGraph(){
        for(int i=0; i<vertices.size(); i++){
            cout<<vertices[i]<<" -> ";
            for(auto edge: adjlist[i]){
                cout<< "(" << edge.first << ", " << edge.second << ") ";
            }
            cout<<"\n";
        }
    }
};

int main(){
    WeightedDirectedGraph g;
    g.addEdge(2,3,6);
    g.addEdge(1,2,9);
    g.addEdge(3,1,6);
    g.addEdge(1,3,9);

    g.printGraph();
}