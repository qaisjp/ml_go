package main

import "C"

//export sum
func sum(a int, b int) int {
	return a + b
}
