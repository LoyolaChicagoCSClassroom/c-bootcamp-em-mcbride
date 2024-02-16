#include <stdio.h> //standard inputoutput library
#include "token.h" //token header file

//NOTE: used chat for help breaking down my final work into relevant commentary and making sure I understood what was actually happening between/among files

int main() {
    token_t num_token = {NUMBER, "321"}; //token representation for number
    token_t op_token = {OPERATOR, "-"}; //token representation for an operator
    token_t sym_token = {SYMBOL, ","}; //token representation for a symbol
    token_t word_token = {WORD, "TEHEHE"}; //token representation for a word

    printf("\nNumber Token: %s\n", num_token.text); //print text
    printf("\nOperator Token: %s\n", op_token.text);
    printf("\nSymbol Token: %s\n", sym_token.text);
    printf("\nWord Token: %s\n", word_token.text);

    return 0; //0 indicates success
}