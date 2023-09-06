CC = g++
CFLAG = 

main.exe : admissions.o admissions_main.o
	$(CC) $(CFLAG) -o admissions_main.exe admissions.o admissions_main.o

admissions_main.o : admissions_main.cpp
	$(CC) $(CFLAG) -c admissions_main.cpp

admissions.o : admissions.cpp
	$(CC) $(CFLAG) -c admissions.cpp

