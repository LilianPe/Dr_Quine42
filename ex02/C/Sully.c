/*
This program will print its own source when run.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NAME "Sully_X.c"
#define SOURCE "/*%cThis program will print its own source when run.%c*/%c#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%c#define NAME %cSully_X.c%c%c#define SOURCE %c%s%c%cint main() {%cchar file[10] = %cSully_X.c%c;%cint i = %d;%ci--;%cstrcpy(file, NAME);%cfile[6] = i + 48;%cFILE *f = fopen(file, %cw%c);%cif (f) {%cfprintf(f, SOURCE, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, SOURCE, 34, 10, 10, 34, 34, 10, i, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10);%cfclose(f);%c}%cif (i <= 0) {%creturn (0);%c}%cchar cmd[100];%csprintf(cmd, %cclang -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d; ./Sully_%%d%c, i, i, i);%csystem(cmd);%creturn (0); %c}"
int main() {
char file[10] = "Sully_X.c";
int i = 5;
i--;
strcpy(file, NAME);
file[6] = i + 48;
FILE *f = fopen(file, "w");
if (f) {
fprintf(f, SOURCE, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, SOURCE, 34, 10, 10, 34, 34, 10, i, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10);
fclose(f);
}
if (i <= 0) {
return (0);
}
char cmd[100];
sprintf(cmd, "clang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d; ./Sully_%d", i, i, i);
system(cmd);
return (0); 
}