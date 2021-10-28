#pragma once

#define INIT_SIZE 1

#include <stdint.h>

typedef struct vector_s
{
    int32_t *data;
    uint32_t capacity;
    uint32_t size;
} vector_t;

// opaque definition of vector_t struct
typedef struct vector_s vector_t;

vector_t * v_init(uint32_t size);

vector_t * v_push_back(vector_t * v, int32_t e);

vector_t * v_pop_back(vector_t * v);

void v_destroy(vector_t * v);