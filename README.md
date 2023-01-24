# scrivi_intero

Nel file file.c implementare la definizione della funzione:


extern bool scrivi_intero(const char *filename, int i);


La funzione accetta come parametro una stringa C che contiene un nome di file e un numero intero a 32 bit con segno e deve:

- aprire il file in modalità scrittura tradotta (testo)
- scrivere sul file in formato testo il valore di i in base 10
- chiudere il file


La funzione ritorna false se filename è NULL o se non riesce ad aprire correttamente il file.

In questo esercizio non create un file file.h, e nel file main.c mettete la funzione main() che utilizza la funzione scrivi_intero(). Il main() non deve generare warning.

