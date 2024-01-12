#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>


typedef struct {
    int slots[3];
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    /**
     * Cria uma instância de um Parking, onde os limites de cada slot é passado como arumento.
     * Retorna o ponteiro para o Parking criado.
    */
    
    ParkingSystem* parking = malloc(sizeof(ParkingSystem));
    if (parking) {
        parking->slots[0] = big;
        parking->slots[1] = medium;
        parking->slots[2] = small;
    } return parking;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    if (obj->slots[carType-1] > 0) {
        obj->slots[carType-1]--;
        return true;
    } return false;
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}

/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);
 
 * parkingSystemFree(obj);
*/

