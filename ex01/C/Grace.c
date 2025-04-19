//comment
#include <stdio.h>
#define F "Grace_kid.c"
#define SOURCE "//comment%c#include <stdio.h>%c#define F %cGrace_kid.c%c%c#define SOURCE %c%s%c%c#define MAIN int main() {FILE *f = fopen(F, %cw%c);if (f) {fprintf(f, SOURCE, 10, 10, 34, 34, 10, 34, SOURCE, 34, 10, 34, 34, 10);fclose(f);}return (0);}%cMAIN"
#define MAIN int main() {FILE *f = fopen(F, "w");if (f) {fprintf(f, SOURCE, 10, 10, 34, 34, 10, 34, SOURCE, 34, 10, 34, 34, 10);fclose(f);}return (0);}
MAIN