#include <pointerutilities.h>

void safe_free(void **p)
{
    if(*p == NULL)
    {
        return;
    }
    free(*p)
    *p = NULL;
}