set(ITEM_SRC
        core/item.h
        core/gameitem.h
        core/lectureitem.h)

set(ITEM_TYPES_SRC
        # GameItem
        psxgame.h
        wiigame.h
        # LectureItem
        book.h
        journal.h
        )

add_library(item INTERFACE ${ITEM_SRC} ${ITEM_TYPES_SRC})