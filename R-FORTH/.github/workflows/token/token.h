#ifndef TOKEN_H //if not defined
#define TOKEN_H //define
#include <stdio.h> //standard

typedef enum { //define enum type for tokens
    NUMBER,
    OPERATOR,
    SYMBOL,
    WORD,
    END_OF_FILE
} token_type_t; //alias for enum

typedef struct { //define token structure
    token_type_t type; //token type
    char* text; //text of token
} token_t; //alias for struct

token_t* get_next_token(char **input); //func. prototype for next token
void classify_token(token_t *token); //func. prototype for token classification
const char *token_type_to_string(enum token_type_t type); //func. prototype to convert to string

#endif //end of ifndef