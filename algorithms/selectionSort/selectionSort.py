import sys

array = [20, 5, 21, 6, 23, 7, 34, 999, 68]

def selectionSort(array):
    
    #recorrer todo nuestro array
    for i in range(len(array)):
        print(array)
        #encontrar el valor minimo restante dentro de nuestro array desaordenado
        indexDesordenado = i
        for j in range(i+1, len(array)):
            if array[indexDesordenado] > array[j]:
                indexDesordenado = j

        
        #ya que encontramos el minimo lo vamos a cambiar
        #por el primer valor de nuestro array desordenado
        array[i], array[indexDesordenado] = array[indexDesordenado], array[i]

#ejecutamos la funcion

selectionSort(array)
print("Array ordenado: ")

for i in range(len(array)):
    print("%d" %array[i]),