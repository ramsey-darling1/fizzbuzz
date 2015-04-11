package main

import "fmt"

func main() {

	var fizz string
	var buzz string

	for n := 0; n <= 100; n++ {
		str := "%d %s%s"
		if n%3 == 0 {
			fizz = "fizz"
		} else {
			fizz = ""
		}
		if n%5 == 0 {
			buzz = "buzz"
		} else {
			buzz = ""
		}
		res := fmt.Sprintf(str, n, fizz, buzz)
		fmt.Println(res)
	}
}
