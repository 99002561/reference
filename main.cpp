#include "Library.h"
#include "book.h"
#include<iostream>
Book::Book(){}
Book::Book(int id,string tit,string au_tit,string pub,double pri,int pages): m_id(id),m_title(tit),m_author(au_tit),m_publisher(pub),m_price(pri),m_pages(pages){}
void Book::display()
{
    cout<<m_id<<endl;
    cout<<m_title<<endl;
  cout<< m_author<<endl;
  cout<<m_publisher<<endl;
  cout<<m_price<<endl;
cout<<m_pages<<endl;
}


void Library::addBook(int id, std::string title, std::string title_author,
  std::string publisher,double price,int pages) {
  //Book temp(id,title, author, publisher, price,pages);
  //books.push_back(temp);         //Method-1, not recommended
  books.push_back(Book(id,title,title_author,publisher, price,pages)); //Method-2
  //books.emplace_back(id,title,author,publisher, price,pages);
                                    //Method-3, allowed from C++11
}
/*std::ostream& operator<<(ostream& rout,const books& obj)
{

  rout<<obj.books;
  return rout;
}/*
void Library::addBook(const Book& ref) {
  books.push_back(ref);
}
*/
void Library::displayAll()
{
  std::list<Book>::iterator iter;
  for(iter=books.begin();iter!=books.end();++iter)
    {
    iter->display();
   //cout<<*iter;
    }
   // for (auto iter = books.begin(); it != mylist.end(); ++it)
      //  cout << ' ' << *it;   //iter->getPrice, iter->getTitle
}
/*void Book::display()
{
    std::list<Book>::iterator iter;
    cout<<*iter;
}*/
int Book::getId()
{
    return(m_id);
}
Book* Library::findBookById(int id) {
  std::list<Book>::iterator iter;
  for(iter=books.begin();iter!=books.end();++iter)
    if(iter->getId()==id)
       //iter->display();
        return &(*iter);

  return NULL;
}
/*void Library::removeBookById(int id) {
  std::list<Book>::iterator iter;
  for(iter=books.begin();iter!=books.end();++iter)
    if(iter->getId()==id)
{
        books.remove(iter);}
  //if(iter!=books.end()) books.remove(iter);
}
*/
double Book::getPrice()
{
return(m_price);
}
double Library::findAveragePrice() {
  double sum=0;
  std::list<Book>::iterator iter;
  for(iter=books.begin();iter!=books.end();++iter)
     sum += iter->getPrice();
  return sum/books.size();
}
/*

Book& findBookWithMaxPages() {
  std::list<Book>::iterator iter=books.begin();
  auto maxIter = iter;
  double maxPages=iter->getPrice();
  ++iter;
  for(;iter!=books.end();++iter)
    if(iter->getPages() > maxPages)
        maxPrice = iter->getPages();
  //TODO: return book with max pages
  return *maxIter;
}
*/
string Book::getAuthor()
{
    return(m_author);
}
/*std::list<Book>  findAllBooksByAuthor(std::string author)
{
  std::list<Book> results;
  std::list<Book>::iterator iter;
  for(iter=books.begin();iter!=books.end();++iter)
  {
    if(iter->getAuthor()==author)
       {
       results.push_back(*iter);
       iter->display();
       }
       }
  return results;
  }



//std::list<Book> results;
//fetchAllBooksByAuthor(author,results);
//void fetchAllBooksByAuthor(std::string author, std::list<Book>& results);

*/









int main()

{

Library l;
//Library l1;
l.addBook(12,"abc","thameem","tum",150.5,200);
l.addBook(13,"kya","hai","ye",150.5,200);
l.addBook(14,"bus","hoo","gya",150.5,200);
l.displayAll();
cout<<"-----------------------------------------------"<<endl;
cout<<"To Find The Details By Id"<<endl;
l.findBookById(12);
//l.removeBookById(13);
cout<<"To Find the Average price"<<endl;
cout<<l.findAveragePrice();
//l.displayAll();
//l.findAllBooksByAuthor("thameem");



}
