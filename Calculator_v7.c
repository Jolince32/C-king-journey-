#include <stdio.h>

// Function 1: Array la irukura ella number ah kooti sum tharum
float calculateSum(float arr[], int size) { // arr[] = numbers array, size = evlo items
    float sum = 0; // sum ah 0 la start pannu da
    for(int i = 0; i < size; i++) { // i=0 la irunthu size-1 varaikum po
        sum = sum + arr[i]; // ovvoru element ah sum kooda kootu
    }
    return sum; // final sum ah return pannu
}

// Function 2: Array oda average kandu pidikum
float calculateAverage(float arr[], int size) {
    float sum = calculateSum(arr, size); // mela irukura sum function ah use pandrom - code reuse
    if(size!= 0) { // size 0 na divide by zero error varum
        return sum / size; // sum ah size aala divide panna average
    } else {
        return 0; // size 0 na 0 dhan return pannu
    }
}

// Function 3: Array la periya number edhu nu kandu pidikum
float findMax(float arr[], int size) {
    float max = arr[0]; // first element ah max nu vechikalam
    for(int i = 1; i < size; i++) { // 1 la irunthu start pannu, 0 ah already max la iruku
        if(arr[i] > max) { // ippo irukura element max ah vida perusa
            max = arr[i]; // adha max ah maathu
        }
    }
    return max;
}

int main() {
    int n; // user evlo number kuduka poran
    printf("=== C King Calculator V7 - Arrays Mode ===\n");
    printf("How many numbers you want? ");
    scanf("%d", &n); // n = array size

    if(n <= 0) { // negative or 0 kudutha error
        printf("Invalid! 1 ku mela kudu da\n");
        return 0;
    }

    float numbers[n]; // n size ulla float array create aagudhu

    // User kitta n numbers vaangu
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) { // i=0,1,2...n-1 varaikum loop odum
        printf("Number %d: ", i + 1); // Number 1, Number 2 nu user ku kaatum
        scanf("%f", &numbers[i]); // array oda i-th index la store pannu
    }

    // Functions ah call panni results edutha
    float sum = calculateSum(numbers, n);
    float avg = calculateAverage(numbers, n
