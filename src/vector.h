#pragma once

#define INIT_SIZE 1

#include <stdint.h>


// opaque definition of vector_t struct
typedef struct vector_s vector_t;

vector_t * v_init(uint32_t size);

vector_t * v_push_back(vector_t * v, int32_t e);

vector_t * v_pop_back(vector_t * v);

void v_destroy(vector_t * v);

// Accessors
int32_t v_size(vector_t *v);

int32_t v_capacity(vector_t *v);

int32_t v_get(vector_t *v, uint32_t i);

int8_t v_is_empty(vector_t *v);