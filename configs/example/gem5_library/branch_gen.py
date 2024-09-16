
import sys

tmpl = """


#include <stdio.h>
#include <cstdlib>

#define N {N}

int main(int argc, char* argv[])
{{
    printf("Hello world!\\n");

    int a[N];

    // Here we initialize the memory.
    for (int i=0; i < N; i++)
        a[i] = std::rand() % 256;

        
    const int num_iter = 10;
    printf("Summing array elements %d times...\\n", num_iter);

    
    for (int iter=0; iter < num_iter; iter++) {{
        int sum = 0;

{loop_tmpl}

        printf("Iter:%d = Sum: %d\\n", iter, sum);
    }}
    return 0;
}}

"""



def gen_loop_tmpl(N):
    loop_tmpl = ""
    for i in range(N):
        loop_tmpl += f"    if (a[{i}] > {(128-i) % 124})\n"
        loop_tmpl += f"        sum += a[{i}];\n"
    return loop_tmpl


def gen_branch(N):

    loop_tmpl = gen_loop_tmpl(N)

    # return loop_tmpl
    return tmpl.format(N=N, loop_tmpl=loop_tmpl)



if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python branch_gen.py <N> <output_file>")
        sys.exit(1)
    
    N = int(sys.argv[1])
    output_file = sys.argv[2]

    with open(output_file, "w") as f:
        f.write(gen_branch(N))
    print(f"Generated branch code with N={N} in {output_file}")