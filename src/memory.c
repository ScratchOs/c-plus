#include <stdlib.h>
#include "memory.h"

void* reallocate(void* previous, size_t oldSize, size_t newSize){
  return realloc(previous, newSize);
}