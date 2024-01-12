typedef struct {
    int size;
    int ptr;
    char** stream;
} OrderedStream;


OrderedStream* orderedStreamCreate(int n) {
    OrderedStream* new = malloc(sizeof(OrderedStream));

    new->size = n;
    new->ptr = 0;
    new->stream = malloc(n * sizeof(char*));

    for (size_t a = 0; a < n; ++a) {
        new->stream[a] = "";
    }

    return new;
}

char** orderedStreamInsert(OrderedStream* obj, int idKey, char* value, int* retSize) {
    /**
     * Adiciona 'value' no stream e se o 'idkye' do 'value' adicionado for equivalente
     * ao 'ptr', então retona uma lista de 'values' que sucedem o 'value' adicionado.
    */
    
    char** ret = NULL;

    *retSize = 0;
    obj->stream[idKey -1] = value;
    
    while (obj->ptr < obj->size && strcmp(obj->stream[obj->ptr], "")) {
        *retSize += 1;
        ret = realloc(ret, *retSize * sizeof(char*));
        ret[*retSize -1] = obj->stream[obj->ptr];
        ++obj->ptr;
    }
    return ret;
}

void orderedStreamFree(OrderedStream* obj) {
    
    free(obj->stream);
    obj->stream = NULL;

    free(obj);
    obj = NULL;
}

/**
 * Your OrderedStream struct will be instantiated and called as such:
 * OrderedStream* obj = orderedStreamCreate(n);
 * char** param_1 = orderedStreamInsert(obj, idKey, value, retSize);
 
 * orderedStreamFree(obj);
*/

void printret(char** list, int n) {
    if (n == 0) {
        puts("[]");
        return;
    }
    for (size_t a = 0; a < n; ++a) {
        puts(list[a]);
    }
}