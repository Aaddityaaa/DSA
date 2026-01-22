        // Matrix representation
        
#include<iostream>
#include<vector>
using namespace std;

class UndirectedGraph{
    public:

    vector<vector<int>> matrix;
    int size;
    UndirectedGraph(int vertex){
        matrix.resize(vertex, vector<int>(vertex,0));
        size = vertex;
    }

    void addEdge(int src, int destination,int weight){
        if(src >= 0 && src < size && destination >= 0 && destination < size){
            matrix[src][destination] = weight;
        }else{
            cout<<"Invalid edge";
            return;
        }
    }

    void display(){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};

int main(){
    UndirectedGraph g(4);
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,3,6);
    g.addEdge(3,3,9);

    g.display();
}