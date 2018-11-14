#include<bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void insert(int x){
	Node* temp = new Node();
	temp->data = x;
	temp->next = Head;
	Head = temp;

}

void Print(){
	Node* temp = Head;
	cout<<"List is:"
	while(temp!=NULL){
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<endl;


}
 Node* Head;
 
int main(){
	Head = NULL;
	int n,i,x;
	cin>>n;
	cout<<"enter x";
	for(i=0; i<n; i++){
		cin>>x;
		insert(x);
		Print();
	}

}