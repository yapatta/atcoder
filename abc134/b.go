package main

import (
	"fmt"
)

func main() {
	var N, D int
	fmt.Scan(&N, &D)
	var ans int
	if N%(2*D+1) == 0 {
		ans = N / (2*D + 1)
		fmt.Println(ans)
	} else {
		ans = N/(2*D+1) + 1
		fmt.Println(ans)
	}
}
