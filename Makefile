CXX = g++

CPPFLAGS = -std=c++11 -Wall -Wextra

SOURCES = Node.cpp Queue.cpp main.cpp

TARGET = myprogram

all = $(TARGET)

OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET):$(OBJECTS)
	$(CXX) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	rm -f $(OBJECTS) $(TARGET)

# Regla para recompilar todo
rebuild: clean all

# Indica que 'clean' y 'rebuild' no son archivos
.PHONY: all clean rebuild