#1.- Hacer comparaciones de elementos adyacentes
#2.- Repetir hasta tener un recorrido completo sin ningun swap

def bubbleSort(array):
    n = len(array)
    cambio = True

    for i in range(n):
        print(array)
        cambio = False

        for j in range(0, n-i-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
                cambio = True

        if cambio == False:
            break

array = [190, 1200, 1, 2, 4, 55, 1000, 6, 800]
bubbleSort(array)

print("Arreglo ordenado es: ")

for i in range(len(array)):
    print("%d" %array[i]),