CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_LOOP=basicClassification.c advancedClassificationLoop.c numClass.h
OBJECTS_LIB_RECURSION=basicClassification.c advancedClassificationRecursion.c numClass.h
FLAGS= -Wall -g

all: loops loopd recursives recursived mains maindloop maindloop maindrec

maindloop: $(OBJECTS_MAIN) loopd
        $(CC) $(FLAGS) -o main.o -L loopd


maindrec: $(OBJECTS_MAIN) recursived
        $(CC) $(FLAGS) -o main.o -L recursived


loops: $(OBJECTS_LIB_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB_LOOP)

recursives: $(OBJECTS_LIB_RECURSION)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_RECURSION)

recursived:$(OBJECTS_LIB_RECURSION)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_RECURSION)


loopd: $(OBJECTS_LIB_LOOP)
	$(CC) -shared -fPIC -o libclassloops.so $(OBJECTS_LIB_LOOP)

mains: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o main.o -L recursives.exe 

maindloop: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o main.o -L loopd.exe

maindrec: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o main.o -L recursived.exe
main.o: main.c 
	gcc -o main.o -c main.c

