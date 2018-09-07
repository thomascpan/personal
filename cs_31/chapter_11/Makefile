# Makefile
# Specify what I need in the end. One single executable
main : main.o dtime.o
# Read this as divisionExecutable depends on main.o div.o
# But how is it produced??? Hmm...using the below statement
	g++ main.o dtime.o -o main
# starts with tab, I repeat tab
#-----------------------------------------------------------------
# But main.o is not there? So specify how it is produced.
main.o : main.cpp dtime.h
	g++ -c main.cpp
# Same for test.o
dtime.o : dtime.cpp dtime.h
	g++ -c dtime.cpp

clean:
	rm *.o main