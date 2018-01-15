Problem:
Give an array of integers, return indices of two numbers such that they add up to specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
Example:
Given nums = [2,7,11,15], target = 9, Because nums[0] + nums[1] = 2 + 7 = 9, return [0,1]

Break down:
¿Esta ordenado? En este caso si, pero no es requerimiento
¿Qué pasa si no da? Debe ser por lo menos 2 números
Solo números positivos
Caso mas sencillo
Tamaño sea 2 -> 0,1
Caso 3
[2,7,4] target = 6
Se necesita el tamaño del arreglo como parametro, también el arreglo como parametro y el objetivo
Hacer un ciclo for que recorra el tamaño del arreglo
Haga la operación a prueba y error
En cada prueba y error verificar si es la respuesta correcta y si lo es regresar que ya se solucionó
Sino regresar un nulo
