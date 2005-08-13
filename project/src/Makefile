abg_SOURCES = $(wildcard *.cpp)
abg_OBJECTS = $(patsubst %.cpp, %.o, $(abg_SOURCES))

CXXFLAGS = -I../include -W -Wall -Wno-unused-parameter
LDFLAGS = `allegro-config --libs` -lcurl

abg: $(abg_OBJECTS)
