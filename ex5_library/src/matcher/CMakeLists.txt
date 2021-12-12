set(MATCHER_CORE
        core/matcher.h
        core/matcher_binary.h
        core/matcher_unary.h)

set(MATCHER_TYPES
        and.h
        contains_name.h
        date_gt.h
        date_lt.h
        exact_date.h
        exact_name.h
        or.h
        )

add_library(matcher INTERFACE ${MATCHER_CORE} ${MATCHER_TYPES})