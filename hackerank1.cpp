#include <iostream>
#include <cstddef>
#include<stdlib.h>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }	struct qnd{
    Node* nd;
    struct qnd* next;    
};
typedef struct qnd qnd;
void enqueue(qnd** frref,qnd** reref,Node* data)
{
qnd* newnode=(qnd*)malloc(sizeof(qnd));
newnode->nd=data;
newnode->next=NULL;
if((*frref)==NULL&&(*reref)==NULL)
{
(*frref)=(*reref)=newnode;
return;
}
(*reref)->next=newnode;
(*reref)=newnode;    
}
void dequeue(qnd** frref,qnd** reref)
{  
    qnd* temp=(*frref);
    if((*frref)==NULL)
    {return;
    }
    else if((*frref)==(*reref))
    {
        (*frref)=(*reref)=NULL;
        free(temp);
        return;
    }
    (*frref)=(*frref)->next;
    free(temp);
}
bool isempty(qnd* frref)
{
    if(frref==NULL)return true;
    else return false;
}	
int BFStrvsl(Node* root)
{   int n=0;
    qnd* front=NULL;
    qnd* rear=NULL;
        if(root==NULL)
    return 0;
    enqueue(&front,&rear,root);
    while(!isempty(front))
    {    
        Node* current=front->nd;
        n++;
        if(current->left!=NULL)enqueue(&front,&rear,current->left);
        if(current->right!=NULL)enqueue(&front,&rear,current->right);
        dequeue(&front,&rear);
    }
 return n;
}
    
int getHeight(Node* root){
        int height=0;
        int node=BFStrvsl(root);
        for(int i=node;i/2!=0;i=i/2)
         height++;
        return height;  
          //Write your code here
        }
        }; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}   
       
            
        
