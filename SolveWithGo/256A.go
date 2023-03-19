package main

import (
	"fmt"
)

func main() {

	// var N int
	// fmt.Scan(&N)

	var n1 string
	var n2 string
	fmt.Scan(&n1)
	fmt.Scan(&n2)

	var cnt uint16 = 0

	for i := 0; i < len(n2); i++ {
		if n1[cnt] == n2[i] {
			cnt++
		}
	}

	fmt.Println(cnt + 1)
}
