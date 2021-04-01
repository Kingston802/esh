CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g -Wall -O2

SRCS=main.cpp 

all: run 
	
run:
	$(CXX) $(CPPFLAGS) $(SRCS)-o esh


