#include <stdio.h>
void printProgram(char* s) {printf(s, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10);}
int main() {
// Comment main
char *s = "#include <stdio.h>%cvoid printProgram(char* s) {printf(s, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10);}%cint main() {%c// Comment main%cchar *s = %c%s%c;%cprintProgram(s);%creturn(0);%c}%c// Comment outside";
printProgram(s);
return(0);
}
// Comment outside