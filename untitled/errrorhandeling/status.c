//
// Created by saud1 on 19-09-2020.
//
#include "status.h"

static char *messages[] = {
        "ok",
        "memory allocation error",
        "empty structure/array",
        "full structure/array",
        "no Such element",
        "Error opening file",
        "error closing file",
        "error acceesing file",
};

char *errorMessage(status s) {
    return s < ERRUNKNOWN ? messages[s] : messages[ERRUNKNOWN];
}
