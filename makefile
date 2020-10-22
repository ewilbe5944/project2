compile-all:
	g++ -c Simulation.cpp 
	g++ -c WorkPay.cpp
	g++ Driver.cpp -o Driver.out Simulation.o WorkPay.o

compile-simulation:
	g++ -c Simulation.cpp -o Simulation.o

compile-workpay:
	g++ -c WorkPay.cpp -o Workpay.o

run:
	./Driver.out

clean:
	rm *.out
	rm *.o
