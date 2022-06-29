#Executable names:
EXE = main
TEST = test

#Add all object files needed for compiling:
EXE_OBJ = main.o 
OBJS = main.o Graph.o Vertex.o Edge.o fileio.o Layout.o Earth.o

#Generated files

#Use the cs225 makefile template:
include cs225/make/cs225.mk

