# Brayan-Suarez-C---Parcial-1-Data-Structures

Nombre: Brayan Suárez Ceballos  
Código: 1091272970  
Asignatura: Estructura de Datos  
Parcial I Estructura de Datos 2024-2  
Universidad Tecnológica de Pereira  


Pregunta 1 
  
La clase vector implementa lo que se conoce como un arreglo dinámico. Es decir, en parte  
se comporta como un arreglo pero extiende la funcionalidad de los arreglos permitiendo que la  
estructura de datos crezca o se contraiga de acuerdo a su uso. Responda las siguientes  
preguntas respecto a la estructura de datos vector.  
  
1. Por qué es necesario hacer resize del vector cuando este se llena y es necesario seguir  
almacenando elementos?. A caso no sería una mejor opción apartar un espacio en  
memoria para seguir almacenando los elementos que se van a insertar en el futuro así se  
deba llevar registro dentro de la clase de que los elementos del vector pueden estar  
almacenados en diferentes lugares de la memoria?

Respuesta pto. 1: Para responder a esta pregunta tenemos que mencionar algo importante  
al hablar de vectores, y es que estos están almacenados de forma continua en la memoria.  
Uno de los motivos por el cual los vectores están almacenados de forma continua en la  
memoria es para un acceso más eficiente a cada uno de sus elementos, haciendo uso  
unicamente de su indice. Por lo tanto, si no se hace resize y los elementos que se insertan  
en el futuro son almacenados en diferentes lugares de memoria, se pierde este principio  
de los vectores, y el acceso a sus elementos se torna más ineficiente.  

Mantener el almacenamiento del vector continuo en la memoria mejora y hace más simple su implementación,  
la otra opción lo haría más complicado e incluso más ineficiente, no se podría acceder a sus  
elementos haciendo uso unicamente del indice del vector. 
  
2. Si comparamos el vector con una lista enlazada como la implementada en el curso cree  
usted que la lista pueda ser más eficiente?. Justifique su respuesta.  
