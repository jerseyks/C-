all:
	mkdir -p Build

	cd Build && cmake ..
	cd Build && make -j
	cd Build && ./EXE
clean:
	rm -rf Build
