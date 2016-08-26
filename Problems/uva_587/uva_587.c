#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    int c = 0;
    long int st;
    double x, y, m;
    double bM = sqrt(0.5);
    char l, k;
    char *s, *s2, *aux;
    s = (char *) malloc(1000);
    while (fgets(s, 1000, stdin), s[strlen(s)-1] = 0, strcmp(s, "END")) {
        printf("Map #%d\n", ++c);
        x = y = 0;
        aux = strtok(s, ",.");
        do {
            st = strtol(aux, &s2, 0);
            m = isalpha(s2[1]) ? bM : 1;
            while(isalpha(*s2)) {
                switch(*s2) {
                    case 'S': y -= st*m; break;
                    case 'W': x -= st*m; break;
                    case 'N': y += st*m; break;
                    case 'E': x += st*m; break;
                }
                s2++;
            }
        } while((aux = strtok(NULL, ",.")) && strlen(aux));
        printf("The treasure is located at (%.3lf,%.3lf).\n", x, y);
        printf("The distance to the treasure is %.3lf.\n", sqrt(x*x + y*y));
        printf("\n");
    }
    free(s);
    return 0;
}
