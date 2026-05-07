#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} DynArray;

void da_init(DynArray *self, int capacity) {
    self->data = (int *)malloc(capacity * sizeof(int));
    self->size = 0;
    self->capacity = capacity;
}


void da_clear(DynArray *self) {
    
    if (self->data != NULL) {
        free(self->data);
    }
    
   
    self->data = NULL;
    self->size = 0;
    self->capacity = 0;
    
    
}

void da_append(DynArray *self, int value) {
    if (self->capacity == 0) {
        da_init(self, 10);
    }
    if (self->size == self->capacity) {
        self->capacity *= 2;
        self->data = (int *)realloc(self->data, self->capacity * sizeof(int));
    }
    self->data[self->size++] = value;
}

void da_destroy(DynArray *self) {
    free(self->data);
    self->data = NULL;
    self->size = self->capacity = 0;
}

int main() {
    DynArray da;
    da_init(&da, 5);

    
    for (int i = 0; i < 10; i++) da_append(&da, i);
    printf("Meret feltoltes utan: %d, Kapacitas: %d\n", da.size, da.capacity);

   
    da_clear(&da);
    printf("Meret torles utan: %d\n", da.size);

    
    da_append(&da, 100);
    da_append(&da, 200);
    printf("Meret ujra-hozzaadas utan: %d, Elso elem: %d\n", da.size, da.data[0]);

    da_destroy(&da);
    return 0;
}