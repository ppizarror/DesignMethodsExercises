#ifndef LIBRARY_JOURNAL_H
#define LIBRARY_JOURNAL_H

#include <utility>
#include "core/lectureitem.h"

class Journal : public LectureItem {
public:
    Journal(std::string name, int date) : LectureItem(std::move(name), date) {};
};

#endif //LIBRARY_JOURNAL_H