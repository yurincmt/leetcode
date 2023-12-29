int finalValueAfterOperations(char** operations, int operationsSize) {
    int x = 0;

    for (size_t a = 0; a < operationsSize; ++a) {

        if (strstr(operations[a], "++")) {
            x++;

        } else if (strstr(operations[a], "--")) {
            x--;
        }
    } return x;
}