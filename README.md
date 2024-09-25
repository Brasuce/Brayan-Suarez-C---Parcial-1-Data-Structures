# Brayan-Suarez-C---Parcial-1-Data-Structures

Nombre: Brayan Suárez Ceballos  
Código: 1091272970  
Asignatura: Estructura de Datos  
Parcial I Estructura de Datos 2024-2  
Universidad Tecnológica de Pereira  


## Pregunta 1 
  
La clase vector implementa lo que se conoce como un arreglo dinámico. Es decir, en parte  
se comporta como un arreglo pero extiende la funcionalidad de los arreglos permitiendo que la  
estructura de datos crezca o se contraiga de acuerdo a su uso. Responda las siguientes  
preguntas respecto a la estructura de datos vector.  
  
### 1. Por qué es necesario hacer resize del vector cuando este se llena y es necesario seguir  
### almacenando elementos?. A caso no sería una mejor opción apartar un espacio en  
### memoria para seguir almacenando los elementos que se van a insertar en el futuro así se  
### deba llevar registro dentro de la clase de que los elementos del vector pueden estar  
### almacenados en diferentes lugares de la memoria?

{ Respuesta pto. 1: Para responder a esta pregunta tenemos que mencionar algo importante  
al hablar de vectores, y es que estos están almacenados de forma continua en la memoria.  
Uno de los motivos por el cual los vectores están almacenados de forma continua en la  
memoria es para un acceso más eficiente a cada uno de sus elementos, haciendo uso  
unicamente de su indice. Por lo tanto, si no se hace resize y los elementos que se insertan  
en el futuro son almacenados en diferentes lugares de memoria, se pierde este principio  
de los vectores, y el acceso a sus elementos se torna más ineficiente.  

Mantener el almacenamiento del vector continuo en la memoria mejora y hace más simple su implementación,  
la otra opción lo haría más complicado e incluso más ineficiente, no se podría acceder a sus  
elementos haciendo uso unicamente del indice del vector. }
  
### 2. Si comparamos el vector con una lista enlazada como la implementada en el curso cree 
### usted que la lista pueda ser más eficiente?. Justifique su respuesta.  
  
{ Respuesta pto. 2: No considero que una sea más eficiente que la otra, ambas estructuras son eficientes  
y se debe decidir cual emplear de acuerdo al problema que se quiera resolver.  Como mencione  
en la respuesta de la pregunta anterior, los elementos de un vector están almacenados de  
forma continua en la memoria, lo que permite un acceso rapido a cada elemento que este contenga.  
Así mismo, el vector permite tener "casillas" vacías sin afectar su funcionamiento.  
Las listas, por otro lado, NO están almacenadas de forma continua en la memoria, lo que implica que  
para buscar los elementos almacenados en ella, esta debera recorrer cada nodo hasta encontrar el  
nodo objetivo, pero esto las hace más eficientes para inserciones y eliminaciones, ya que estas  
operaciones pueden llevarse acabo una vez encontrado el nodo, mientras que en el caso de los  
vectores será necesario hacer un desplazamiento de los elementos. 

Tambien se debe tener en cuenta que una lista ocupa más espacio en memoria que un vector, debido  
a los punteros.  

Así concluyo, una vez más, en que ninguna de las estructuras mencionadas es más eficiente que la otra. 
Esto realmente dependerá de lo que se quiere llevar a cabo con su uso. }





