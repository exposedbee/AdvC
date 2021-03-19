//
// Created by saud1 on 19-09-2020.
//

#ifndef UNTITLED_STATUS_H
#define UNTITLED_STATUS_H
typedef enum {
    OK, ERRALLOC, ERREMPTY, ERRFULL, ERRABSENT, ERROPEN, ERRCLOSE, ERRACCESS, ERRUNKNOWN
} status;

char *errorMessage(status s);

#endif //UNTITLED_STATUS_H
