#include<iostream>
#include<vector>
using namespace std;

struct Book {
    int accessionNumber;
    string nameOfAuthor;
    string bookTitle;
    bool flag;

    void display(){
        cout << accessionNumber << " " << nameOfAuthor << " " << bookTitle << " " << flag << endl;
    }

    void getBook(){
        cin >> accessionNumber >> nameOfAuthor >> bookTitle >> flag;
    }
};

void getTheList(int numberOfBooks, vector<Book> &bookList){
    for (int i = 0; i < numberOfBooks; i++){
        Book b;
        b.getBook();
        bookList.push_back(b);
    }
}

void printTheList(vector<Book>bookList){
    for (int i = 0; i < bookList.size(); i++){
        bookList[i].display();
    }
}
void addOtherBook(vector<Book>&bookList, Book b){
    bookList.push_back(b);
}

void removeBook(vector<Book> &bookList, int index){
    bookList.erase(bookList.begin() + index);

}

vector<Book> particularAuthor (vector<Book> bookList, string author){
    vector<Book> b;
    for (int i = 0; i < bookList.size(); i++){
        if (bookList[i].nameOfAuthor == author) b.push_back(bookList[i]);
    }
    return b;
}

int particularTitleCount(vector<Book>& bookList, string theTitle){
    int count = 0;
    for (int i = 0; i < bookList.size(); i++){
        if (bookList[i].bookTitle == theTitle) count++;
    }
    return count;
}

int totalBookCount(vector<Book>& bookList){
    return bookList.size();
}

int main(){
    vector<Book>bookStore;
    int numberOfBooks;
    cin >> numberOfBooks;
    getTheList(numberOfBooks, bookStore);
    printTheList(bookStore);
    Book books;
    books.getBook();
    addOtherBook(bookStore, books);
    printTheList(bookStore);
    string author;
    cin >> author;
    printTheList(particularAuthor(bookStore, author));
    string title;
    cin >> title;
    cout << " The number of book having the same title: " << particularTitleCount(bookStore, title) << endl;
    cout << " the total number of book on the book store: " <<totalBookCount(bookStore);
    int index;
    cin >> index;
    removeBook(bookStore, index);
    return 0;

}
