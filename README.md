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

## Pregunta 2  

Considere el siguiente programa:  

> int main() {  
>   Vector<int> x;  
>   Vector<int> y(10,1.8);  
>   Vector<int> z(100, 2.0);  
>   for (unsigned int i = 0; i < 10000; i++) {  
>     x.push_back(i);  
>     y.push_back(i);  
>     z.push_back(i);  
>   }  
>   return 0;  
> }  

El vector x es construido (línea 2) utilizando el constructor por defecto que tiene una  
capacidad inicial de 5 y una política de crecimiento de 2.0. Es decir, cada que se redimensiona  
se solicita memoria para un arreglo del doble de los elementos que se almacenan hasta ese  
momento. El vector y se construye (línea 3) con 10 elementos de capacidad inicial y una  
política de crecimiento de 1.8. Por último el vector z es inicializado (línea 4) con una capacidad  
inicial de 100 elementos y una política de crecimiento de 2.0.  

### 1. Para cada uno de los vectores especifique cuál es su capacidad final y el desperdicio en el que incurre.

Para calcular su capacidad final:  
Ci (Capacidad Inicial)  
Cf (Capacidad Final)  
R (Constante del resize)  
n (Número de resize llamados)  
Des (Desperdicio)
N = 10000 (Número de elementos que se ingresan)  
  
Cf = Ci * R^n (Ecuación capacidad final)  
  
Para calcular n:  

log base R( N / Ci )

Para calcular el desperdicio: 

Des = Cf - N

### Vector x:  
No se ve con que se inicializa pero en la pregunta dice que su capacidad inicial es 5 y se duplica al hacer resize.  
Se van a agregar 10.000 elementos con el bucle for.  
  
La capacidad final es 10.240, y se usan 10.000 casillas, por lo que su desperdicio es de 240.  
  
### Vector y:  
Este vector se inicializa con una capacidad de 10 y cada resize se multiplica su capacidad por 1.8    
Se van a agregar 10.000 elementos con el bucle for.  
  
La capacidad final es 11.568, y se usan 10.000 casillas, por lo que su desperdicio es de 1.568.  
  
### Vector z:  
Este vector se inicializa con una capacidad de 100 y cada resize duplica su capacidad.  
Se van a agregar 10.000 elementos con el bucle for.  
  
Su capacidad final será de 12.800, y como se usan 10.000 casillas, por lo que su desperdicio es de 2.800.  
  
### 2. Cuál de los vectores resultó ser más eficiente a la hora de ejecutar el programa? Justifique clara y concisamente su respuesta.  
  
Pues en este caso, si mis calculos son correctos y no la regué en ningún lado, el Vector X viene siendo el que resulto ser más  
eficiente. Esto se debe a que su capacidad en memoria es menor, ya que fue el vector de menor tamaño (10.240), y que además, en este  
problema, fue quien tuvo un menor desperdicio, con solo 240 casillas desperdiciadas.  

## Pregunta 3  

En este punto usted deberá crear la estructura de datos AdjacencyList para representar  
redes de transporte de forma general. Es decir, con un número arbitrario de ciudades y con  
conexiones arbitrarias entre las mismas. Tenga en cuenta que las ciudades siempre se  
representan con números consecutivos que comienzan desde cero. Además es importante  
notar que no todas las ciudades están conectadas entre si.  
  
1. Proponga una implementación en C++ de la clase AdjacencyList , defina  
apropiadamente sus atributos y sus operaciones. Usted puede utilizar para esto  
cualquiera de las estructuras de datos discutidas en clase.  
   
2. Cree operaciones para adicionar y remover ciudades.  
   
3. Cree una operación que dada una ciudad retorne las ciudades que se encuentran  
conectadas con esta.  
