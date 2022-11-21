CC=gcc
AR=ar -rcs
OBJECTS_MAIN=main.o
LOOP = advancedClassificationLoop.o
REC = advancedClassificationRecursion.o
BASIC = basicClassification.o
HED=NumClass.h
FLAGS= -Wall -g
.PHONY:clean all

all: mains mainloop maindrec advancedClassificationLoop.o advancedClassificationRecursion.o basicClassification.o 
#advancedClassificationLoop.c advancedClassificationRecursion.c basicClassification.c

# mains, nainloop and maindrec - executables

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a
mainloop:main.o libclassloops.so
	$(CC) $(FLAGS) -o mains main.o ./libclassloops.so
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o mains main.o ./libclassrec.so


# - libraries

loops: libclassloops.a
recursives: libclassrec.a
loopd: libclassloops.so
recursived: libclassrec.so


libclassloops.a: $(LOOP) $(BASIC)
	$(AR) libclassloops.a $(LOOP) $(BASIC)

libclassloops.so: $(LOOP) $(BASIC)
	$(CC) $(FLAGS) -shared -fPIC -o libclassloops.so $(LOOP) $(BASIC)

libclassrec.a: $(REC) $(BASIC)
	$(AR) libclassrec.a $(REC) $(BASIC)

libclassrec.so: $(REC) $(BASIC)
	$(CC) $(FLAGS) -shared -fPIC -o libclassrec.so $(REC) $(BASIC)




# compilaing the .o files

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c


basicClassification.o: $(HED) basicClassification.c
	$(CC) $(FLAGS) -c $(HED) basicClassification.c 

advancedClassificationRecursion.o: $(HED) advancedClassificationRecursion.c
	$(CC) $(FLAGS) -c $(HED) advancedClassificationRecursion.c

advancedClassificationLoop.o: $(HED) advancedClassificationLoop.c
	$(CC) $(FLAGS) -c $(HED) advancedClassificationLoop.c
	


# compilaing the .o files
	
basicClassification.c:
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationRecursion.c:
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

advancedClassificationLoop.c:
	$(CC) $(FLAGS) -c advancedClassificationLoop.c
	
	
	
		
# compiling the .c files

#clear

clean:
	rm -f cmake-build-debug *.o *.a *.so mains maindloop maindrec
