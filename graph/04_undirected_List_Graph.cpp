#include<iostream>
#include<vector>
using namespace std;

class UndirectedGraph{
    public:
    vector<int> vertices;
    vector<vector<int>> adjlist; // adjacency list

    // check if vertex exist or not
    int findVertex(int v){
        for(int i=0; i<vertices.size(); i++){
            if(vertices[i] == v)
                return i;
        }
        return -1;
    }

    // add unique vertex
    void addVertex(int vertex){
        if(findVertex(vertex) == -1){
            vertices.push_back(vertex);
            adjlist.push_back(vector<int>());
        }
    }

    void addEdge(int src,int destination){
        addVertex(src);
        addVertex(destination);

        int srcIndex = findVertex(src);
        int destIndex = findVertex(destination);

        adjlist[srcIndex].push_back(destination);
        adjlist[destIndex].push_back(src);
    }

    void printGraph(){
        for(int i=0; i<vertices.size(); i++){
            cout<<vertices[i]<<" -> ";
            for(int edge : adjlist[i]){
                cout<<edge<<",";
            }
            cout<<"\n";
        }
    }
};

int main(){
    UndirectedGraph g;
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(4,3);

    g.printGraph();
}