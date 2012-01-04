
help:
	@echo "Usage:"
	@echo "  all   - Compile everything."
	@echo "  clean - Remove generated files, including cache."

all:
	cd src && cmake .
	make -C src all

clean:
	find -type d -name CMakeFiles -exec $(RM) -R '{}' \; -prune
	find -type f -name CMakeCache.txt -exec $(RM) '{}' \; 
	find -mindepth 2 -type f -name Makefile -exec $(RM) '{}' \;
	find -mindepth 2 -type f -name cmake_install.cmake -exec $(RM) '{}' \;

