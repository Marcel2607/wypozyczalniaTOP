#include <iostream>

using namespace std;

struct node {
	int val;
	node* next;
};

void Add(node*& H, int x) {
	node* p= new node;
	p->val=x;
	p->next=H;
	H=p;
}

void del(node*& H) {
    if(H!=NULL) {
        node* p = H;
        H=H->next;
        delete p;
    }
}

void show_list(node* H) {
    cout<< "H->";
    node* p=H;
    while(p!=NULL) {
        cout << p->val<<"->";
        p=p->next;
    }
    cout <<"NULL"<<endl;
}

int ile(node*p) {
    int licz=0;
    while(p) {
        licz++;
        p=p->next;
    }
    return licz;
}

void zamiana(node*&H) {
    if(H!=NULL&&H->next!=NULL) {
        node*p=H;
        H=p->next;
        p->next=H->next;
        H->next=p;

    }

}



int main() {
	node *H=NULL;
	Add(H,10);
	cout<<H->val<<endl;
	Add(H,15);
	cout<<H->val<<endl;
	del(H);
	cout<<H->val<<endl;
	node* H_NULL;
	Add(H,3);
	Add(H,12);
	show_list(H);
	Add(H,5);
	show_list(H);
	del(H);
	show_list(H);
	Add(H->next,5);
	show_list(H);
	del(H->next);
	int x=ile(H);
	cout<<"Liczba elementow listy: "<<x<<endl;
	Add(H,6);
	Add(H,8);
	Add(H,13);
	show_list(H);
	x=ile(H);
	cout<<"Liczba elementow listy: "<<x<< endl;

	show_list(H);
	zamiana(H);
	show_list(H);

return 0;
}
