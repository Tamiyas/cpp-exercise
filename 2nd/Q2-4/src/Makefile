CXX      := g++
CXXFLAGS := -std=c++11 -Wall
TARGET   := Animal
SRCS     := animal.cpp dog.cpp cat.cpp main.cpp
OBJS     := $(SRCS:.cpp=.o)

all: $(TARGET)

run: all
	./$(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)

