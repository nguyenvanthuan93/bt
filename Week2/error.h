/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __ERROR_H__
#define __ERROR_H__
#include "token.h"

typedef enum {
  ERR_ENDOFCOMMENT,
  ERR_IDENTTOOLONG,
  ERR_INVALIDCHARCONSTANT,
  ERR_INVALIDSTRING,
  ERR_INVALIDNUMBER,
  ERR_INVALIDSYMBOL,
} ErrorCode;


#define ERM_ENDOFCOMMENT "End of comment expected!"
#define ERM_IDENTTOOLONG "Identification too long!"
#define ERM_INVALIDCHARCONSTANT "Invalid const char!"
#define ERM_INVALIDSTRING "Invalid string!"
#define ERM_INVALIDNUMBER "Invalid number!"
#define ERM_INVALIDSYMBOL "Invalid symbol!"

void error(ErrorCode err, int lineNo, int colNo);

#endif
