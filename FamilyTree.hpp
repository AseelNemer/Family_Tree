#ifndef FAMILYTREE_H
#define FAMILYTREE_H
#include<stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

namespace family{

class node
{
public:
    string data;
    node *left;
    node *right;
    node(string); //outline
};


class Tree {

    public:

    node* root;

    Tree();
    Tree(string); //sets the root of the tree (the youngest person)
    
    Tree& addFather(string , string); // Tells the tree that the father of name is fname.
    Tree& addMother(string, string); // Tells the tree that the mother of name is mname.

    void display();  // displays the tree in a human-friendly format.
    
    string relation(string);  // prints the relationship between this name and the root
    string find(string); // tells us whats the name of the bpersons who has this relation with the root
    
    string remove(string node); // remove this person and all the others under him

};
}
#endif