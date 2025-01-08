# include <stdio.h>
void england (){
    printf("You are in England\n");
    return;
}
void Australia (){
    printf("You are in Australia\n");
    england();     // calling England 
    return;
}
void India(){
    printf("You are in India\n");
    Australia();    // calling Australia 
    return;
}
int main(){
    India();      // calling india 
    return 0;
}