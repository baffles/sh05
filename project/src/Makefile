enet_SOURCES = $(wildcard enet/*.c)
enet_OBJECTS = $(patsubst %.c, %.o, $(enet_SOURCES))
abg_SOURCES = $(wildcard *.cpp)
abg_OBJECTS = $(patsubst %.cpp, %.o, $(abg_SOURCES))

CFLAGS = -I../include
CXXFLAGS = -I../include -W -Wall -Wno-unused-parameter
LDFLAGS = `allegro-config --libs` -lcurl

abg: $(abg_OBJECTS) $(enet_OBJECTS)
