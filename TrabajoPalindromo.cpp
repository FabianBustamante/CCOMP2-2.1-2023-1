#include <iostream>
using namespace std;

bool esPalindromoRecursivo(int arr[], int inicio, int fin) {
    if (inicio >= fin) {
        return true;
    }
    if (arr[inicio] != arr[fin]) {
        return false;
    }
    return esPalindromoRecursivo(arr, inicio + 1, fin - 1);
}

bool esPalindromoIterativo(int arr[], int tamaño) {
    int inicio = 0;
    int fin = tamaño - 1;
    while (inicio < fin) {
        if (arr[inicio] != arr[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

//bubbleSort

void bubbleSort(int arr[], int tamaño) {
    for (int i = 0; i < tamaño - 1; i++) {
        for (int j = 0; j < tamaño - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//insertionSort

void insertionSort(int arr[], int tamaño) {
    for (int i = 1; i < tamaño; i++) {
        int actual = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > actual) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = actual;
    }
}

int main() {
    int arr[] = { 1 , 2, 3, 3, 2, 1 };
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    cout << "Arreglo original:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    if (esPalindromoRecursivo(arr, 0, tamaño - 1)) {
        cout << "El arreglo es un palíndromo." << endl;
    } else {
        cout << "El arreglo no es un palíndromo." << endl;
    }
    bubbleSort(arr, tamaño);
    cout << "Arreglo ordenado con BubbleSort:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, tamaño);
    cout << "Arreglo ordenado con InsertionSort:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}