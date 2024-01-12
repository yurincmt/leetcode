int mostWordsFound(char** sentences, int sentencesSize) {
    /**
     * Recebe um array de strings e o tamanho desse array.
     * Retorna um inteiro que diz a quantidade de palavras, separadas por espaço, que a maior string possui.
    */
   
    int greater = 0;
    for (size_t a = 0; a < sentencesSize; ++a) {

        int countSpace = 1, b = 0;
        while (sentences[a][b] != '\0') {
            if (sentences[a][b++] == ' ') {
                ++countSpace;
            }
        }
        if (countSpace > greater) {
            greater = countSpace;
        }
    }
    return greater;
}