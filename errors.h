//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_ERRORS_H
#define LAB2_ERRORS_H

#include <errno.h>

#define IS_ERROR(error) (errno==error)
#define SET_ERROR(error) (errno=error)
#define CLEAR_ERRORS (errno=0)
#define OUT_OF_RANGE 0xf1
#define INSUFFICIENT_CAPACITY 0xf2
#define NOT_FOUND -0xa1
#define SUCCESS 0
#endif //LAB2_ERRORS_H
