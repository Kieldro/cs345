echo Running script...

file="hello.jj"
input="input"

if true; then
	echo hello!
fi

echo generating parser files from .jj file...
javacc $file

echo compiling java files...
javac *.java

echo exectuing parser on $input file...
java hello < $input
#java hello < $*
