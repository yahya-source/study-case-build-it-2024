#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
int nomor;
    
    scanf ( "%d", &nomor);
        
    if (nomor % 2 == 0 ){
        printf ("Genap");
    } else { 
        printf ("Ganjil");
    }
    
    return 0;
}