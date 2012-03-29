echo Running script...

file="hello.jj"
input="input.c"

if true; then
	echo hello!
fi

echo generating parser files from .jj file...
# java boiler-plate files only produced if they don't already exist?
javacc $file

echo compiling java files...
javac *.java

echo exectuing parser on $input file...
java hello < $input
#java hello < $*
