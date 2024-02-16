#include "token.h" //token header file
#include <stdlib.h> //standard library - memory allocation
#include <string.h> //string manipulation

//function for token creation!
token_t* create_token(token_type_t type, const char* text) {
    //allocate token memory
    token_t* token = (token_t*)malloc(sizeof(token_t));
    //check if mem allocation fails
    if (token == NULL) {
        fprintf(stderr, "Error: Failed to allocate token memory.\n");
        exit(EXIT_FAILURE);
    }

    token->type = type; //assign token type
    token->text = strdup(text); //copy text, assign to token
    
    //check if text allocation fails
    if (token->text == NULL) {
        fprintf(stderr, "Error: Failed to allocate mem for token text.\n");
        free(token);  //free mem
        exit(EXIT_FAILURE); //exit with failure
    }

    return token; //return created token
}

//free token memory function
void free_token(token_t* token) {
    free(token->text); //text
    free(token); //token
}

//function for token to string
const char *token_type_to_string(enum token_type_t type) {
    switch (type) { //switch based on type
        case NUMBER:
            return "Number";
        case OPERATOR:
            return "Operator";
        case SYMBOL:
            return "Symbol";
        case WORD:
            return "Word";
        case END_OF_FILE:
            return "EndOfFile";
        default:
            return "Unknown";
    }
}