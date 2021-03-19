//
// Created by saud1 on 19-09-2020.
//

#ifndef UNTITLED_STATUS_H
#define UNTITLED_STATUS_H
typedef enum {
    OK,
    ERROPEN,
    ERRACCESS,
    ERRCLOSE,
    ERRALLOC,
    ERRDATE,
    ERRFULL,
    ERREMPTY,
    ERRABSENT,
    ERREXIST,
    ERRINDEX,
    ERRUNABLE,

    ERRUNKNOWN,
} status;

/** get message associated with the given status value (O(1)).
 * @param s the status value
 * @return the associated message
 */
extern char* errorMessage(status s);

#endif //UNTITLED_STATUS_H
