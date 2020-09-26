#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include<string>
#include<iostream>
using namespace std;
class Book {
std::list<Book> books;
  int m_id;
  std::string m_title;
  std::string m_author;
  std::string m_publisher;
  double m_price;
  int m_pages;
  public:
  Book();
  Book(int,string,string,string,double,int);
  friend std::ostream& operator<<(std::ostream& rout,  const Book& obj);
  //TODO: default ctor
  //TODO: param ctor with 6 args
  //TODO: param ctor with few args
  //TODO: display
  //TODO: get functions
  int getId();
  void display();
  double getPrice();
  string getAuthor();
//{
   // std::list<Book>::iterator iter;
   // std::cout<<*iter;
//}
};

#endif // BOOK_H_INCLUDED
