Problem:
A password is considered strong if below conditions are all met:

    It has at least 6 characters and at most 20 characters.
    It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
    It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).

Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

Break down:

Para poder desarrollar los otros tres casos primero es contar los caracteres del String por lo tanto es cambiar el String que se obtiene en caracteres y de ahí contar si al menos son 6 y si son máximo 20 incluso la otra opcion es contar el tamaño del String pero no estoy seguro si eso se pueda con C pero si con Java o C++.

Despues es checar en cada caracter del string que haya al menos un caracter que cumpla con una condicion y otro con otra condicion. Poner un for que en cuanto encuentre una letra que cumpla que es minuscula imprima que cumple con esa condicion y sino que imprima que no cumple con esa condicion, despues el siguiente punto que sea que la letra es mayuscula pasa al siguiente for y recorre el String y checa e imprime e igual para saber si tiene un numero.

Y al final checar que las letras no se repitan busca la primera letra del String y la compara con el siguiente y si es la misma busca en el siguiente espacio si se repite y si es así marca que es debil, si es al contrario cuenta la primera letra y la segunda no es la misma la salta y se queda con la segunda como su primera y checa la siguiente de esa y se repite hasta terminar el String.

Para poder ejecutar esta idea primero se tiene que cumplir la primera condicion y despues la segunda hasta llegar a la tercera, pongamos ejemplos para poder explicar mejor.

Ejemplo 1:
ja
Imprime: "No tiene al menos 6 caracteres"
Se detiene
Imprime: "Contraseña debil"
Imprime: "Escribe al menos 6 caracteres"


Ejemplo 2:
JAjaJAjaJAjaJAjaJAjaJA
Imprime: "Tiene mas de 20 caracteres"
Se detiene
Imprime: "Contraseña debil"
Imprime: "Escribe menos de 20 caracteres"

Ejemplo 3:
JAjaJAjaJAjaJAjaJAja
Imprime: "Tiene al menos 6 caracteres y menos de 20 caracteres"
Imprime: "Tiene al menos una letra minuscula"
Imprime: "Tiene al menos una letra mayuscula"
Imprime: "No tiene al menos un numero"
Se detiene
Imprime: "Contraseña debil"
Imprime: "Escribe al menos un numero"

Ejemplo 4:
JAJAJAJAJAJAJAJAJAJA
Imprime: "Tiene al menos 6 caracteres y menos de 20 caracteres"
Imprime: "No tiene al menos una letra minuscula"
Se detiene
Imprime: "Contraseña debil"
Imprime: "Escribe al menos una letra minuscula"

Ejemplo 4:
jajajajajajajajajaja
Imprime: "Tiene al menos 6 caracteres y menos de 20 caracteres"
Imprime: "Tiene al menos una letra minuscula"
Imprime: "No tiene al menos una letra mayuscula"
Se detiene
Imprime: "Contraseña debil"
Imprime: "Escribe al menos una letra mayuscula"

Ejemplo 6:
JAjaJAjaJAjaJAjaaaj1
Imprime: "Tiene al menos 6 caracteres y menos de 20 caracteres"
Imprime: "Tiene al menos una letra minuscula"
Imprime: "Tiene al menos una letra mayuscula"
Imprime: "Tiene al menos un numero"
Imprime:  "Tiene caracteres seguidos repetidos"
Se detiene
Imprime: "Contraseña debil"
Imprime: "No pongas tres caracteres repetidos de manera seguida "

Ejemplo 7:
Hola21
Imprime: "Tiene al menos 6 caracteres y menos de 20 caracteres"
Imprime: "Tiene al menos una letra minuscula"
Imprime: "Tiene al menos una letra mayuscula"
Imprime: "Tiene al menos un numero"
Imprime:  "No tiene caracteres seguidos repetidos"
Se detiene
Imprime: "Contraseña fuerte"
