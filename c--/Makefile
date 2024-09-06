all: all
	make compiler # comps
	make binary # tools
	make tests # tests
	echo "Done"

compiler: c--.h
	echo "We need password permissions to continue."
	sudo echo "Password submitted"
	cd src
	sudo mkdir /usr/include/c--
	sudo cp parse.h /usr/include/c--/parse.h
	sudo cp c--.h /usr/include/c--/c--.h
	cd ..
	echo "Done: target compiler"

binary: cli
	echo "We need password permissions to continue."
	sudo echo "Password submitted"
	cd tools/cli
	gcc cli.cpp c--
	sudo cp c-- /usr/local/bin/c--
	cd ..
	echo "Done: target tests"

tests: print.cmm functions.cmm verybig.cmm
	cd tools/tests
	c-- functions.cmm
	c-- print.cmm
	c-- verybig.cmm
	cd ..
	echo "Done: target tests"
