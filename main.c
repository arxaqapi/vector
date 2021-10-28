#include "src/vector.h"
#include <stdio.h>


int main(void)
{
    printf("-- test start --\n\n");
    
    vector_t *v = v_init(10);
    v_push_back(v, 10);
    v_push_back(v, 11);
    v_push_back(v, 12);
    v_push_back(v, 13);
    v_push_back(v, 14);
    v_push_back(v, 15);
    v_push_back(v, 16);
    v_push_back(v, 17);
    v_push_back(v, 18);
    v_push_back(v, 19);
    // The array is resized here
    v_push_back(v, 20);
    for (size_t i = 0; i < v_capacity(v); i++)
    {
        printf("v: %d ", v_get(v, i));
    }
    v_destroy(v);
    
    printf("\n\n-- test end   --\n");
    return 0;
}