#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            /**
             * By BingLi224
             * 18:44 THA 14/03/2019
             */
            Node *n = head;

            while ( n ) {
                int data = n->data;
                Node *prevNode = n;
                Node *currentNode = prevNode->next;
                while ( currentNode ) {
                    if ( currentNode->data == data ) {
                        // remove it
                        if ( currentNode->next ) {
                            // replace by the next node
                            prevNode->next = currentNode->next;
                        } else {
                            prevNode->next = NULL;
                        }

                        delete ( currentNode );

                        // next iterator
                        currentNode = prevNode->next;
                    } else {
                        currentNode = currentNode->next;
                    }
                } // while: current node has children

                // check the next node
                n = n->next;
            } // while: current node != null

            return head;
          }

          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}
