use std::io;

fn main(){
    let mut buf1 = String::new();
    io::stdin().read_line(&mut buf1).ok();
    let n: usize = buf1.trim().parse().unwrap();

    let mut buf2 = String::new();
    io::stdin().read_line(&mut buf2).ok();
    let mut v: Vec<usize> = buf2.split_whitespace().map(|s| s.parse().unwrap()).collect();
    
    v.sort();

    let mut ans: usize = 0;
    for i in 0..n {
        for j in 0..i {
            for k in 0..j {
                if v[i] != v[j] && v[i] != v[k] && v[j] != v[k] && v[k] + v[j] > v[i] {
                    ans += 1;
                }
            }
        }
    }
    println!("{}", ans);
}