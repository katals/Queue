# StackManagerCPP

Este es un proyecto en C++ que implementa una estructura de datos de pila (Stack) y una clase de nodo (Node). El proyecto también incluye una clase de estudiante (Student) y un archivo principal (main.cpp) para probar la funcionalidad.

## Estructura del Proyecto

- `Node.cpp`: Implementación de la clase Node.
- `Stack.cpp`: Implementación de la clase Stack.
- `Student.cpp`: Implementación de la clase Student.
- `main.cpp`: Archivo principal que contiene la función `main` para probar la funcionalidad del proyecto.

## Sistema

- g++ 11.4.0
- WSL 2 - ubuntu 22.04

## Compilación y Ejecución

Para compilar y ejecutar el proyecto, puedes usar el Makefile proporcionado. Aquí están los comandos disponibles:

- `make`: Compila el proyecto y genera el ejecutable `myprogram`.
- `make clean`: Elimina los archivos objeto generados y el ejecutable.
- `make rebuild`: Limpia y recompila todo el proyecto.

## Makefile

```makefile
CXX = g++

CPPFLAGS = -std=c++11 -Wall -Wextra

SOURCES = Node.cpp Stack.cpp main.cpp Student.cpp

TARGET = myprogram

all: $(TARGET)

OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJECTS)
    $(CXX) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
    $(CXX) $(CPPFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
    rm -f $(OBJECTS) $(TARGET)

# Regla para recompilar todo
rebuild: clean all

# Indica que 'clean' y 'rebuild' no son archivos
.PHONY: all clean rebuild
