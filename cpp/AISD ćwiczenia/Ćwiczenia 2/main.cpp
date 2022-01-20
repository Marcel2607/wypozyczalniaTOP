#include <iostream>

using namespace std;

struct node {
    int val;
    node* next;
};

void Add(node*& H, int x){
    node* p=new node;
    p->val=x;
    p->next=H;
    H=p;
}

void del(node*& H) {
    if(H!=NULL) {
        node* p=H;
        H=H->next;
        delete p;
    }
}

void showList(node *H) {
    cout<<"H->";
    node* p=H;
    while(p!=NULL) {
        cout<<p->val<<"->";
        p=p->next;
    }
    cout<<"NULL"<<endl;
}

void kopiowaniex2(node*& H){
    if(H!=NULL) {
        node* p=H;
        while(p!=NULL) {
            for(int i=0;i<p->val;i++) {
                Add(p->next,p->val);
                p=p->next;
            }
            p=p->next;
        }
    }
}

void usunX(node*& H, int x) {
    if(H!=NULL) {
        if(H->val==x){
            del(H);
        } else{
            node* p=H;
            while(p->next!=NULL&&p->next->val!=x) {
                p=p->next;
                if(p->next!=NULL)
                    del(p->next);
            }
        }
    }
}

void swap(node*& H) {
    if(H!=NULL&&H->next!=NULL) {
        node*p=H;
        H=p->next;
        p->next=H->next;
        H->next=p;
    }
}

void usuwanieCoDrugie(node*& H) {
    if(H!=NULL&&H->next!=NULL) {
        node* p=H;
        while(p!=NULL&&p->next!=NULL){
            del(p->next);
            p=p->next;
        }
    }

}

void Zad1(node*& H, int x){
    if(H!=NULL&&H->next!=NULL){
        if(H->next->val==x){
            swap(H);
        } else {
        node* p=H;
        while(p->next->next!=NULL&&p->next->next->val!=x) {
            p=p->next;
            if(p->next->next!=NULL&&p->next->next->val!=NULL){
                node* e=p->next;

                p->next=e->next;
                e->next=e->next->next;
                p->next->next=e;

            }
        }
        }
    }
}

/*void Zad3(node*&H){
    for(int i=0;;i=i+2) {
        if(H!=NULL&&H->next!=NULL)
    }
}*/



int main()
{
    node *H=NULL;
    Add(H,8);
    Add(H,1);
    Add(H,10);
    Add(H,5);
    showList(H);
    Zad1(H,1);
    showList(H);

    return 0;
}
