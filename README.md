# Very hacky ml_go
Build with `go build -buildmode=c-shared -o foo.so`

Right now this ships a header file with it, but the header file should be generated by go. I'm having some issues with this.

Here's how I got golang to make foo.h:

* Remove `sum(a,b)` and `include 'foo.h'` from the CFunctions.cpp
* Run the above command (will make foo.h and foo.so)
* Re-add the stuff from the first bullet point
* Run the above command (makes foo.so)
