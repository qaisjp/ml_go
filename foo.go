package main

// When the Go tool sees that one or more Go files use
// the special import "C", it will look for other non-Go
// files in the directory and compile them as part of the
// Go package. Any .c, .s, or .S files will
// be compiled with the C compiler.

//#cgo CPPFLAGS: -g -MD -Wall -I./
//#cgo LDFLAGS: -fPIC -lpthread -lstdc++ -llua5.1
//int sum(int, int);
import "C"

func main() {}
