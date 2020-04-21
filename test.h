//
//  test.h
//  Reworked Directional List
//
//  Created by Gleb Strelets on 4/22/20.
//  Copyright © 2020 Glib Strilets. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
template<class item> class list {
private:
    item d;
    list *next = NULL;
    //None(): next = NULL;
public:
    //dlist* readFile(string);
    //void readCin(dlist *beg);
    void addEl(item e){
        
        
    };
    void setd(item inp){d = inp;}
    list<item>* add(){
        next = new list;
        return next;
    };
    item getD(){
        return d;
        
    };
    list* getN(){
        return next;
    };
};
template <class item> void readToListC(list<item>* m){
    list<item>* cur;
    cur = m;
    string s ="";
    while (s!="n"){
        item inp;
        cin>>inp;
        cur->setd(inp);
        cout<<"If you want to end this list write down n"<<endl;
        cin>>s;
        if (s!="n") {
        cur = cur->add();
        }
    }
    cout<<"End of reading"<<endl;
};
template<class item>void write(list<item> *m){
    list<item> *cur;
    cur = m;
    while (cur!=NULL){
        cout<<cur->getD()<<endl;
        if (cur!=NULL) cur= cur->getN();
        if (cur==NULL) break;
    }
    cout<<"End of writing"<<endl;
}
template<class item>void writeToFile(string place, list<item> *m){
    ofstream output(place);
    //output.open("output.txt");
    list<item>* cur, beg;
    cur = m;
    while (cur!=NULL){
        output<<cur->getD()<<endl;
        if (cur!=NULL) cur= cur->getN();
        if (cur==NULL) break;
    }
    };
