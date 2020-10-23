#pragma once
#ifndef COMMON_H
#define COMMON_H

#define ValidObj(o)                                 \
    do {                                            \
        if((o).obj == NULL) {                       \
            printf(stderr, "%s: NULL\n", __func__); \
            abort();                                \
        }                                           \
    } while(0)

#endif
