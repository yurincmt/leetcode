int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){
    int metTarget = 0;
    
    for (size_t a = 0; a < hoursSize; ++a) {
        if (hours[a] >= target) {
            ++metTarget;
        }
    } return metTarget;
}