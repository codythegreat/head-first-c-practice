#include <stdio.h>

typedef struct {
    const char *description;
    float value;
} Swag;

typedef struct {
    Swag *swag;
    const char *sequence;
} Combination;

typedef struct {
    Combination numbers;
    const char *make;
} safe;

