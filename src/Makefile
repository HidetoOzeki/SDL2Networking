OBJS = server.cpp
CC = g++
INCLUDE = -IC:\MinGW_lib\SDL2x86\include\SDL2
LIBRARY = -LC:\MinGW_lib\SDL2x86\lib
LINKER = -lmingw32 -lSDL2main -lSDL2 -lSDL2_net
NAME = SDL2NetworkingServer
all : $(OBJS)
	$(CC) $(OBJS) $(INCLUDE) $(LIBRARY) $(LINKER) -o $(NAME)
