enet_SOURCES = $(wildcard enet/*.c)
enet_OBJECTS = $(patsubst %.c, %.o, $(enet_SOURCES))
abg_SOURCES = $(wildcard *.cpp) $(wildcard *.c)
abg_OBJECTS = $(patsubst %.c, %.o, $(patsubst %.cpp, %.o, $(abg_SOURCES)))

CFLAGS = -I../include -W -Wall -Wno-unused-parameter -DTRACE_VALIDITY -g3 -O0
CXXFLAGS = $(CFLAGS)
LDFLAGS = `allegro-config --libs` -lcurl -lstdc++ -lz

LINK = g++

abg: $(abg_OBJECTS) $(enet_OBJECTS)
