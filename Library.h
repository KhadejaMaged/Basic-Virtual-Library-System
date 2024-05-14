//
// Created by a on 5/14/2024.
//

#ifndef LIBRARY_SYSTEM_LIBRARY_H
#define LIBRARY_SYSTEM_LIBRARY_H
#include<bits/stdc++.h>
# include "Book.h"
#define ll long long
using namespace  std ;

class Library : public Book{
    vector<Book> catalogue ;
public:
    void Add(Book b){
        catalogue.push_back(b);
    }
    void Remove( ll id){
        for (auto it = catalogue.begin() ; it != catalogue.end() ; it++) {
            if(it->GetId() == id ){
                catalogue.erase(it);
                break;
            }
        }
    }

    vector<Book> FindByAuthor(string author){
        vector<Book> list;
        for (auto  it : catalogue) {
            if(it.GetAuthor() == author){
               list.push_back(it);
            }
        }
        return list ;
    }
    vector<Book> find_books_by_year(ll Year ){
        vector<Book> list;
        for (auto  it : catalogue) {
            if(it.GetYear() == Year){
                list.push_back(it);
            }
        }
        return list ;
    }
    void DisplayAllBook(){
        for (auto it : catalogue) {
            it.DisplayInfo();
        }
    }




};


#endif //LIBRARY_SYSTEM_LIBRARY_H
