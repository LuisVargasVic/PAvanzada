Problem:
Given two lists A and B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.
We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.
These lists A and B may contain duplicates. If there are multiple answers, output any of them.
For example, given
A = [12, 28, 46, 32, 50]  B = [50, 12, 32, 46, 28]  
We should return
[1, 4, 3, 2, 0]  
as  P[0] = 1 because the  0th element of  A appears at  B[1], and  P[1] = 4 because the  1st element of  A appears at  B[4], and so on.
Note:
  A, B have equal lengths in range [1, 100].
  A[i], B[i] are integers in range [0, 10^5].

Break down:
Lo primero que llega a mi mente es recorrer el arreglo B leyendo cada item de A
Ejemplo:
A = [12, 28, 46, 32, 50] B = [50, 12, 32, 46, 28]  
Elegimos A[0] y recorremos el arreglo B hasta encontrar que A[0] sea igual al B[n] n = donde se encuentra lo que es igual a A[0]
En este caso A[0] sería igual a B[1] entonces en R que es el resultado colocamos el número que salio en el lugar de B entonces R sería igual a R = [1]

- ¿Qué pasa si B no tiene algun elemento de A?
Lo que yo haría sería igual recorrer todo el arreglo y regresar null cuando no se encuentre

- ¿Qué pasa si B tiene un elemento que no tiene A?
Lo ignoro ya que buscamos imprimir los que estan en A

- ¿Qué pasa si B no tiene ningun elemento de A?
Se regresa null como resultado
