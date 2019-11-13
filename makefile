CC=gcc
AR=ar
OBJECT_POW_BASIC=power.o basicMath.o
OBJECT_O=power.o basicMath.o main.o
POWER_C=power.c
BASICMATH_C=basicMath.c
FLAGS= -Wall -g

all: mymaths mymathd mains maind
mains: $(OBJECT_O) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECT_O) libmyMath.a
maind: $(OBJECT_O)
	$(CC) $(FLAGS) -o maind $(OBJECT_O) ./libmyMath.so
mymathd: $(OBJECT_POW_BASIC) 
	$(CC) -shared -o libmyMath.so $(OBJECT_POW_BASIC)
mymaths: $(OBJECT_POW_BASIC) 
	$(AR) -rcs libmyMath.a $(OBJECT_POW_BASIC)  
main.o: main.c
	$(CC) $(FLAGS) -fPIC -c main.c
power.o: power.c
	$(CC) $(FLAGS) -fPIC -c power.c
basicMath.o: basicMath.c
	$(CC) $(FLAGS) -fPIC -c basicMath.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind 
