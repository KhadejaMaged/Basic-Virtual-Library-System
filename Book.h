//
// Created by a on 5/14/2024.
//
#define  ll long long
#ifndef LIBRARY_SYSTEM_BOOK_H
#define LIBRARY_SYSTEM_BOOK_H
#include <bits/stdc++.h>
using namespace  std ;
class Book {
    string title , author ;
    ll id , year ;
public:
    Book(){}
    Book( string title , string author , ll id , ll year ){
        this->title = title ;
        this->author = author ;
        this->id = id ;
        this->year = year ;

    }

    void SetTitle(string title){
        this->title = title;
    }
    string GetTitle(){
        return this->title;
    }
    void SetYear( ll year ){
        this->year = year ;
    }
    ll GetYear(){
        return  this->year;
    }
    void SetSuthor(string author){
        this->author = author;
    }
    string  GetAuthor(){
        return  this->author;
    }
    void SetId(ll id ){
        this-> id = id ;
    }
    ll GetId(){
        return this->id ;
    }
    void DisplayInfo(){
            cout<< "The Id of the Book : " << id << "\n";
            cout << "The Title of the book : "<< title <<"\n";
            cout <<"The author of the Book : "<< author <<"\n";
            cout << "publication_year : "<< year <<"\n";

    }


};


#endif //LIBRARY_SYSTEM_BOOK_H
