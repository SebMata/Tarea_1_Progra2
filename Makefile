FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/TipoEnvio.cpp -o bin/TipoEnvio.o
	g++ $(FLAGS) src/EnvioPostal.cpp -o bin/EnvioPostal.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/envios bin/TipoEnvio.o bin/EnvioPostal.o bin/main.o 
	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/tests_envio_postal.cpp -o bin/tests_envio_postal.o
	g++ $(FLAGS) src/TipoEnvio.cpp -o bin/TipoEnvio.o 
	g++ $(FLAGS) src/EnvioPostal.cpp -o bin/EnvioPostal.o 
	g++ -g -o bin/tests bin/tests_envio_postal.o bin/TipoEnvio.o bin/EnvioPostal.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin
