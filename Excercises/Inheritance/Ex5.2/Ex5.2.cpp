#include <iostream>
#include <string>

class Book
{
public:
    Book(std::string _publisher, int _release_year) {
        publisher = _publisher;
        release_year = _release_year;
    }

    std::string getPublisher() {
        return publisher;
    }

    int getReleaseYear() {
        return release_year;
    }

private:
    std::string publisher;
    int release_year;
};

class StudyBook : public Book
{
public:
    StudyBook(std::string _publisher, int _release_year, std::string _subject) : Book(_publisher, _release_year) {
        subject = _subject;
    }

    std::string getSubject() {
        return subject;
    }

    void subject_book() {
        std::cout << subject << " book is produced by " << getPublisher() << " and was released in " << getReleaseYear() << ".\n";
    }

private:
    std::string subject;
};

class SchoolBook : public StudyBook
{
public:
    SchoolBook(std::string _publisher, int _release_year, std::string _subject, std::string _schools) : StudyBook(_publisher, _release_year, _subject) {
        schools = _schools;
    }

    void schoolBook() {
        StudyBook::subject_book();
        std::cout << "Schoolbook " << getSubject() << " is using by " << schools << ".\n";
    }

private:
    std::string schools;
};

class WorkBook : public StudyBook
{
public:
    WorkBook(std::string _publisher, int _release_year, std::string _subject, std::string _level) : 
            StudyBook(_publisher, _release_year, _subject) 
    {
        level = _level;
    }

    void workBook() {
        StudyBook::subject_book();
        if (level == "easy" || level == "normal") {
            std::cout << "Workbook " << getSubject() << " is for all students\n";
        }
        else if (level == "hard") {
            std::cout << "Workbook " << getSubject() << " is for good students\n";
        }
    }
private: 
    std::string level;
};

int main()
{
    SchoolBook* schoolBook = new SchoolBook("Nha xuat ban Giao Duc va Dao Tao Viet Nam", 2001, "Literature", "Tran Hung Dao, Nguyen Khuyen, Ngo Quyen");
    schoolBook->schoolBook();

    std::cout << "\n";

    WorkBook* workBook = new WorkBook("Nha xuat ban Giao Duc va Dao Tao Viet Nam", 2005, "Math", "easy");
    workBook->workBook();

    std::cout << "\n";
}

