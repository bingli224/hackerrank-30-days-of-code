#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root) {
        /*
         * By BingLi224
         * 15:49 THA 10/03/2019
         */
        vector < Node* > child;

        if ( root ) {
            child.push_back ( root );
            Node * r;
            while ( child.size ( ) > 0 ) {
                r = child [ 0 ];
                child.erase ( child.begin ( ) );

                cout << r->data << " ";
                if ( r->left )
                    child.push_back ( r->left );
                if ( r->right )
                    child.push_back ( r->right );
            }        
        }
	}

};//End of Solution
