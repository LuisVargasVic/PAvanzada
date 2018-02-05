Problem:
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"  Output: true  

Example 2:
Input: "LL"  Output: false  

Break down:
Si lo que se quiere es hacer un círculo es volver a la misma posición por lo tanto lo que tenemos que hacer es hacer dos variables, una 'x' para que el robot se mueva de manera horizontal que se representa en un entero y otro 'y' para el movimiento vertical que también se representa en un entero.

Up afecta 1 para 'y' que es de manera vertical
Down afecta -1 para 'y' que es de manera vertical
Left afecta 1 para 'x' que es de manera horizontal
Right afecta -1 para 'x' que es de manera horizontal

Crear un for que reciba un string y lo rompa en caracteres
Si alguno de los caracteres que recibe no los conoce el for regresa que no hay movimientos y el robot no se moverá
Recibe caracteres que conoce cada uno tiene un valor y cada caracter afecta a su respectiva variable si al final de aplicar todo el string las dos variables terminan en 0 regresa verdadero si alguno de los dos tiene algo diferente a 0 regresa falso

Esto significa que puede hacer un circulo o múltiples circulos
