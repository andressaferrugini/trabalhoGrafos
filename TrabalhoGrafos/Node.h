#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include "Edge.h" // Include of the Edge class

using namespace std;

// Definition of the Node class
class Node
{

    // Attributes
private:
    Edge *first_edge;
    Edge *last_edge;
    int id;
    unsigned int in_degree;
    unsigned int out_degree;
    float weight;
    Node *next_node;
    int groupId;

public:
    // Constructor
    Node(int id);
    // Destructor
    ~Node();
    // Getters
    Edge *getFirstEdge();
    Edge *getLastEdge();
    int getId();
    int getInDegree();
    int getOutDegree();
    int getDegree();
    float getWeight();
    Node *getNextNode();
    int getGroupId();
    // Setters
    void setNextNode(Node *node);
    void setWeight(float weight);
    void setGroupId(int group_id);
    // Other methods
    bool searchEdge(int target_id);
    void insertEdge(int target_id, float weight, int id);
    void removeAllEdges();
    int removeEdge(int id, bool directed, Node *target_node);
    void incrementOutDegree();
    void decrementOutDegree();
    void incrementInDegree();
    void decrementInDegree();
    Edge *hasEdgeBetween(int target_id);
    bool temEdgeBetween(int target_id);
    // Auxiliar methods
};

#endif // NODE_H_INCLUDED
