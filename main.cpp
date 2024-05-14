#include <iostream>
#include "Library.h"
#include "Book.h"
#include <bits/stdc++.h>
#define ll long long
using namespace  std ;
int main()
{
    ll choice ;
    Library library ;
    while (choice != -1)
    {
        cout << "Enter your choice: "<<"\n";
        cout << "Choice 1 : Add New Books to the library.  "<<"\n";
        cout << "Choice 2 : Remove Books from the library.  "<<"\n";
        cout << "Choice 3 : Search the library by book author.  "<<"\n";
        cout << "Choice 4 :  Search the library by publication year.  "<<"\n";
        cout << "Choice 5 :  Display all books in the library.  "<<"\n";
        cin >> choice;
        if(choice == 1){
            cout << "Enter author Name."<<"\n";
            cout << "Enter title."<<"\n";
            cout << "Enter unique identifier for the book."<<"\n";
            cout << "Enter  the year the book was published."<<"\n";
            string author , title ;
            ll year , id ;
            cin >> author >> title >> id >> year ;
            Book b(title,author,id ,year);
            library.Add(b);
            cout <<"Added Sucessfully"<<"\n";

        }
        else if (choice == 2){
            cout << "Enter The id of the Book you want to Remove" <<"\n";
            ll id ; cin >> id ;
            library.Remove(id);
            cout <<"Removed Sucessfully"<<"\n";

        }
        else if ( choice == 3){
                cout << "Enter The Name of the Book Author"<<"\n";
                string author ;
                cin.ignore(); // This line is important to ignore any leftover newline character from previous input.
                getline(cin, author);
                vector<Book>BookByAuthor;
                BookByAuthor = library.FindByAuthor(author);
            if (BookByAuthor.empty()) {
                cout << "No books found by the author: " << author << "\n";
            }
            else{
                for (auto it : BookByAuthor) {
                    it.DisplayInfo();
                    cout <<"*************************"<<"\n";
                }
            }
            cout <<"All The book found by this Author Displayed Sucessfully"<<"\n";
        }
        else if ( choice == 4){
            cout << "Enter publication year"<<"\n";
            ll  year ; cin >> year ;
            vector<Book>BookByYear;
            BookByYear = library.find_books_by_year(year);
            if(BookByYear.empty())
                cout << "No books found in this year: " << year<< "\n";
            for (auto it : BookByYear) {
                it.DisplayInfo();
                cout <<"*************************"<<"\n";
            }
            cout <<"All The book found in this Year Displayed Sucessfully"<<"\n";

        }
        else{
            cout << "All the Book in the library "<<"\n";
            library.DisplayAllBook();
            cout << "***************************************" <<"\n";
            cout << "Displayed Successfully."<<"\n";
        }

    }

    return 0;
}
