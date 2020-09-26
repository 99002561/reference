#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#include<list>
#include"book.h"
//#include<bits/stdc+.h>
#include<string>
#include<iostream>
#include<iterator>
using namespace std;
class Library {
  std::list<Book> books;
  public:
  void addBook(int id, std::string title, std::string title_author,
                std::string publisher,double price,int pages);
  void addBook(const Book& ref);
  Book* findBookById(int id);
  void displayAll();
  void removeBookById(int id);
  double findAveragePrice();
  Book& findBookWithMaxPages();  //Book*
  Book& findBookWithMinPriceByPublisher(std::string); //Book*
  double findAveragePriceByPublisher(std::string);
  int countByPriceRange(int,int);
  int countByPriceLimitAndAuthor(std::string, int price);
  std::list<Book> findAllBooksByAuthor(std::string);
  void sortByTitle();
  void display();
};


#endif // LIBRARY_H_INCLUDED
