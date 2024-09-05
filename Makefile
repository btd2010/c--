all:
	make compiler # comps
	make binary # tools
	make tests # tests
	echo "Done"

compiler:
	echo "We need password permissions to continue."
	sudo echo "Password submitted"
	cd compiler
	sudo mkdir /usr/include/c--
	sudo cp cminusminus.h /usr/include/c--/cminusminus.h
	cd ..
	echo "Done: target compiler"

binary:
	echo "We need password permissions to continue."
	sudo echo "Password submitted"
	cd tools
	gcc cli.cpp c--
	sudo cp c-- /usr/local/bin/c--
	cd ..
	echo "Done: target tests"

tests:
	cd tests
	c-- functions.cmm
	c-- print.cmm
	cd ..
	echo "Done: target tests"