
student: student.o main.o
	gcc src/student.o src/main.o -o student

main.o: main.c student.h structure.h
	gcc -c src/main.c

student.o: student.c student.h structure.h
	gcc -c src/student.c

clean:
	rm src/student.o src/main.o student
	