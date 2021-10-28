#include "vector.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Full definition of struct vector
 * 
 */
struct vector_s
{
    int32_t *data;
    uint32_t capacity;
    uint32_t size;
};


vector_t * v_init(uint32_t capacity)
{
    vector_t * nv = calloc(1, sizeof(vector_t));
    nv->data = calloc(capacity, sizeof(int32_t));
    nv->capacity = capacity;
    nv->size = 0;
    return nv;
}

/**
 * @brief add element at the end of the vector
 * 
 * @param v the vector
 * @param e the new element to add
 * @return vector_t*(optional) returns a pointer to the vector 
 */
vector_t * v_push_back(vector_t * v, int32_t e)
{
    if (v->size >= v->capacity) 
    {
        // resize array and copy elements into new one
        v->capacity *= 2;
        int32_t * old_data = v->data;
        int32_t * new_data = calloc(v->capacity, sizeof(int32_t));
        memcpy(new_data, old_data, v->size * sizeof(int32_t));
        v->data = new_data;
        free(old_data);
    }
    // emplace at the end of the array
    v->data[v->size] = e;
    ++ v->size;
    return v;
}

vector_t * v_pop_back(vector_t * v)
{
    if (v->size > 0)
    {
        --v->size;
    }
    return v;
}

void v_destroy(vector_t * v)
{
    free(v->data);
    free(v);
}

// Accesssors
int32_t v_size(vector_t *v)
{
    return v->size;
}
int32_t v_capacity(vector_t *v)
{
    return v->capacity;
}

int32_t v_get(vector_t *v, uint32_t i)
{
    if (i >= v->capacity)
    {
        fprintf(stderr, "Illegal access outside of the vector's capacity is not allowed.\n");
        exit(EXIT_FAILURE);
    }
    return v->data[i];
}

int8_t v_is_empty(vector_t *v)
{
    return v->size == 0;
}