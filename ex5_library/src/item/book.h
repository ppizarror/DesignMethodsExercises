#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <utility>
#include "core/lectureitem.h"

class Book : public LectureItem {
public:
    Book(std::string name, int date) : LectureItem(std::move(name), date) {};
};

#endif //LIBRARY_BOOK_H