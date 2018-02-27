Problem:
Validate if a given string is numeric.

Some examples:

"0" => true
"0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true

Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

Break down:
Puede recibir tres tipos de datos:
Numeros
Comas
Puntos
Exponente "e", "E"


Lo primero que debería de leer el string es un número.
Sino recibe un número imprimir "String no es numérico."
Luego lo que puede leer es este orden: mínimo un número y máximo tres seguido de una coma y despues 3 numeros (obligatorio) o muchos numeros sin comas, parar cuando encuentre un "." o nada.
Otra cosa "String no es numérico."
Luego leer si tiene seguido del "." un número como mínimo o muchos parar al encontrar "e" o "E" o nada.
Otra cosa "String no es numérico."
Luego leer si tiene seguido del "e" o "E" un número como mínimo o muchos parar al encontrar nada.
Otra cosa "String no es numérico."

Solución:
Estructura de la primer regla en un while y que se detenga cuando encuentre un "." o nada.
Dentro del While se checa el cumplimiento de la regla con un "if" "else" imprimir "String no es numérico."
Luego lo lleve a un "if" con la segunda regla que tiene que tener minimo 1 o muchos numeros y que se detenga cuando encuentre un "e" o "E" o nada. "else" imprimir "String no es numérico."
Luego lo lleve a un "if" con la tercera regla que tiene que tener minimo 1 o muchos numeros y que se detenga cuando encuentre nada. "else" imprimir "String no es numérico."
