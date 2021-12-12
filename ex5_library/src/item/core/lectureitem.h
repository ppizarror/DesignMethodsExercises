#ifndef LIBRARY_LECTUREITEM_H
#define LIBRARY_LECTUREITEM_H

#include "item.h"
#include <utility>

class LectureItem : public Item {
public:
    LectureItem(std::string name, int date) : Item(std::move(name), date) {};
};

#endif //LIBRARY_LECTUREITEM_H