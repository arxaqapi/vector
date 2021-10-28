#include "src/vector.h"
#include <stdio.h>


int main(void)
{
    printf("-- Test start --\n\n");
    //// Test init and push_back
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
    v_push_back(v, 20); // The array is resized here

    //// Test set
    v_set(v, 16, 88);
    //// Test get and loop
    for (size_t i = 0; i < v_capacity(v); i++)
    {
        printf("v: %d ", v_get(v, i));
    }
    //// Test destroy
    v_destroy(v);
    
    printf("\n\n-- Test end   --\n");
    return 0;
}