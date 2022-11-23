CC=gcc
AR=ar -rcs
OBJECTS_MAIN=main.o
#OBJECTS_LIB_LOOP=basicClassification.c advancedClassificationLoop.c numClass.h
#OBJECTS_LIB_RECURSION=basicClassification.c advancedClassificationRecursion.c numClass.h
LOOP = advancedClassificationLoop.o
REC = advancedClassificationRecursion.o
BASIC = basicClassification.o
FLAGS= -Wall -g
.PHONY:clean all


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


basicClassification.o:
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationRecursion.o:
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

advancedClassificationLoop.o:
	$(CC) $(FLAGS) -c advancedClassificationLoop.c
	
	
basicClassification.c:
	$(CC) $(FLAGS) -c 

advancedClassificationRecursion.c:
	$(CC) $(FLAGS) -c

advancedClassificationLoop.c:
	$(CC) $(FLAGS) -c 
	
	
	
		
# compiling the .c files

#clear

clean:
	rm -f cmake-build-debug *.o *.a *.so mains maindloop maindrec
