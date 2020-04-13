package main

import "fmt"

func main() {
	func(i, j int) {
		fmt.Println(i + j)
	}(2, 4)

	var sum func(i, j int) = func(i, j int) {
		fmt.Println(i + j)
	}
	sum(2, 7)

	s := []string{"ab", "cd"}
	t := []string{"ef", "gh"}
	s = append(s, "uniti")
	fmt.Println(s)
	s = append(s, t...)
	fmt.Println(s)
	for _, j := range s {
		fmt.Println(j)
	}
}
