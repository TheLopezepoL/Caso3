
fn linear_search(num: i32, arr: &mut [i32]) -> bool{

    for i in 0..arr.len(){
        if arr[i] == num{
            return true;
        }
    }
    return false;
}

use rand::{thread_rng, Rng};
use std::time::{Duration, Instant};

fn main() {
    let mut _array = vec![0; 10000000];
    let mut rng = rand::thread_rng();

    for i in 0.._array.len(){
        _array[i] = rng.gen_range(0..10);
    }
/*
    for i in 0.._array.len(){
        println!("Number: {}", _array[i]);
    }
*/
    let start = Instant::now();
    linear_search(11, &mut _array);
    let duration = start.elapsed();
    println!("Time elapsed in linear_search() is: {:?}", duration);



}
