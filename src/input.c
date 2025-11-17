#include <stdio.h>
#include <ctype.h>

int read_move(int *x, int *y)
{
    char buf[64];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;

    for (char *p = buf; *p; p++)
        if (!isspace(*p) && (*p == 'q' || *p == 'Q'))
            return -1;

    return (sscanf(buf, "%d %d", x, y) == 2);
}
