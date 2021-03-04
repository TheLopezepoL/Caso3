package main
import "time"
import "fmt"
const n = 20000000

func linearsearch(datalist [n]int, key int) bool {
	for _, item := range datalist {
		if item == key {
		 return true
		}
	}
	return false
}


func main() {

	var parray [n]int
	for i := 0; i < len(parray); i++ {
		parray[i] = 1
	}
	start := time.Now()
	linearsearch(parray, 0);
	end := time.Now()
	elapsed := end.Sub(start)
	fmt.Printf("Time of execution: %v\n", elapsed)

	
}
