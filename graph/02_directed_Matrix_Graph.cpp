        // Matrix representation
        
#include<iostream>
#include<vector>
using namespace std;

class DirectedGraph{
    public:

    vector<vector<int>> matrix;
    int size;
    DirectedGraph(int vertex){
        matrix.resize(vertex, vector<int>(vertex,0));
        size = vertex;
    }

    void addEdge(int src, int destination){
        if(src >= 0 && src < size && destination >= 0 && destination < size){
            matrix[src][destination] = 1;
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
    DirectedGraph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(3,3);
    g.addEdge(2,3);

    g.display();
}