#include <iostream>
#include <string.h>
#include "FamilyTree.hpp"
#include <string>
#include <exception>
#include <bits/stdc++.h>
using namespace std;


namespace family{

  node::node(string name)
  {
    this->data = name;
    this->left = NULL;
    this->right = NULL;
 }

 Tree::Tree(string name)
 {
    node *n = new node(name);
    this->root = n;
 }

 Tree Tree::addFather(string child, string father)
 {
    node *a = new node(child);
    node *f = new node(father);
    if(a->left.data == NULL){
        a->left = f;
    }

 }
 
 Tree Tree::addMother(string child, string mother)
 {
    node *a = new node(child);
    node *m = new node(mother);
    if(a->right.data == NULL){
        a->right = f;
    }

 }


 //tells us whats the name of the persons who has this relation with the root

 string Tree::find(string a)
 {
    node* ptr = root;

    if ( ptr != NULL){
        if (a.compare("mother") == 0){
            return ptr->right->data;
        }
        else if (a.compare("father") == 0){
            return ptr->left->data;
        }
        else if (a.compare("grandfather") == 0){
            return ptr->left->left->data;
        }
        else if (a.compare("great grandfather") == 0){
            return ptr->left->left->left->data;
        }
        else if (a.compare("great great grandfather") == 0){
            return ptr->left->left->left->left->data;
        }
        else if (a.compare("great great great grandfather") == 0){
            return ptr->left->left->left->left->left->data;
        }
        else if (a.compare("grandmother") == 0){
            return ptr->right->right->data;
        }
        else if (a.compare("great grandmother") == 0){
            return ptr->right->right->right->data;
        }
        else if (a.compare("great great grandmother") == 0){
            return ptr->right->right->right->right->data;
        }
        else if (a.compare("great great great grandmother") == 0){
            return ptr->right->right->right->right->data;
        }
       else if (a.compare("uncle") == 0)
        {
             throw string("the tree can't handle the uncle relation");
        }
        else if (a.compare("aunt") == 0)
        {
             throw string("the tree can't handle the aunt relation");
        }
    }
    else{
        reurn "not found ...";
    }
 }


 string Tree::relation(string name)
 {
    string relate = " ";
   return relation1(name, relate, this->root);
    //cout<<relate<<endl;
    
 }
 /**
 * this function to help relation function
 */
 string &Tree::relation1(string name, string &relate, node *curr)
 {
    if (curr != NULL)
    {

        if (curr->data == name)
        {
            relate.append("me");
            return relate;
        }
        if (curr->left->left != NULL && curr->left->left->data == name)
        {

            relate.append("grandfather");
            // cout<<relate<<endl;
            return relate;
        }
        if (curr->right->left != NULL && curr->right->left->data == name)
        {
            relate.append("grandfather");
            //cout<<relate<<endl;
            return relate;
        }
        if (curr->right->right != NULL && curr->right->right->data == name)
        {
            relate.append("grandMother");
            //cout<<relate<<endl;
            return relate;
        }
        if (curr->left->right != NULL && curr->left->right->data == name)
        {
            relate.append("grandMother");
            //cout<<relate<<endl;
            return relate;
        }

        if (curr->left != NULL && curr->left->data == name)
        {
            relate.append("father");
            //cout<<relate<<endl;
            return relate;
        }
        if (curr->right != NULL && curr->right->data == name)
        {
            relate.append("mother");
            //cout<<relate<<endl;
            return relate;
        }
        relate.append("great-");
        return this->relation1(name, relate, curr->left);
        return this->relation1(name, relate, curr->right);
    }
    relate = " unrelated";
    return relate;
    
 }

 void Tree::display()
 {
    node* ptr = root;

    if(ptr==NULL)
        return;

    while(ptr!=NULL)
    {
        cout<< ptr->data <<endl;
        display(ptr->left);
        ptr = ptr->right;
    }
 }

 void Tree::remove(string rname){
    ptr = node(rname);
    node* temp =ptr;

    if(ptr==NULL)
        return;

    while(ptr!=NULL)
    {
        remove(ptr->left);
        temp = ptr;
        ptr = ptr->right;
        delete temp;
    }

    start = NULL;
  }
 }


 void Tree::remove(node* subRoot){
  if(subRoot==nullptr){
    return;
  }
  deleteNode(subRoot->father);
  deleteNode(subRoot->mother);
  delete subRoot;
 }
}