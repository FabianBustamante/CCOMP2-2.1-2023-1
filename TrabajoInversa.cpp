#include <iostream>
using namespace std;

void invertirRecursivo(int arr[], int inicio, int fin) {
   
    if (inicio >= fin) {
        return;
    }
    
    int temp = arr[inicio];
    arr[inicio] = arr[fin];
    arr[fin] = temp;
    
    invertirRecursivo(arr, inicio + 1, fin - 1);
}


void invertirIterativo(int arr[], int tam) {
    int inicio = 0;
    int fin = tam - 1;
    
    while (inicio < fin) {
       
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;
       
        inicio++;
        fin--;
    }
}

//BubbleSort
void bubbleSort(int arr[], int tam) {
    
    for (int i = 0; i < tam - 1; i++) {
        
        for (int j = 0; j < tam - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// InsertionSort
void insertionSort(int arr[], int tam) {
   
    for (int i = 1; i < tam; i++) {
        int temp = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}


void imprimirArreglo(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int tam = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    
    invertirRecursivo(arr, 0, tam - 1);
    invertirIterativo(arr2, tam);

    

    cout << "Arreglo invertido (recursivo): ";
imprimirArreglo(arr, tam);
cout << "Arreglo invertido (iterativo): ";
imprimirArreglo(arr2, tam);


bubbleSort(arr, tam);
insertionSort(arr2, tam);


cout << "Arreglo ordenado (BubbleSort): ";
imprimirArreglo(arr, tam);
cout << "Arreglo ordenado (InsertionSort): ";
imprimirArreglo(arr2, tam);

return 0;
}