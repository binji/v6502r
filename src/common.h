#pragma once
#include <assert.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_LAYERS (6)
#define MAX_NODES (2048)
#define MAX_TRACE_ITEMS (256)
#define MAX_BINARY_SIZE ((1<<16)+2)
#define MAX_LINKURL_SIZE (128)
#define PICK_MAX_HITS (16)
#define TRACE_FLIPBIT_CLK0 (1<<0)
#define TRACE_FLIPBIT_OP (1<<1)

typedef struct {
    float x, y, z, w;
} float4_t;

typedef struct {
    float x, y;
} float2_t;