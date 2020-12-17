use std::io;

fn main(){
    let mut s = String::new();
    io::stdin().read_line(&mut s);

    let mut cnt = 0;
    let mut max = 0;
    for c in s.chars() {
        if c == 'R' {
            cnt += 1;
        }
    
        if cnt > max {
                max = cnt;
        }
        
        if c != 'R' {
            cnt = 0;
        }
    }
    println!("{}", max);
}