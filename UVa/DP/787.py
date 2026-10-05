import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    idx = 0
    while idx < len(input_data):
        seq = []
        while idx < len(input_data) and int(input_data[idx]) != -999999:
            seq.append(int(input_data[idx]))
            idx += 1
        
        if idx < len(input_data) and int(input_data[idx]) == -999999:
            idx += 1  # Skip terminator
            
        if not seq:
            continue
            
        curr_max = seq[0]
        curr_min = seq[0]
        glob_max = curr_max
        
        for i in range(1, len(seq)):
            val = seq[i]
            tmp_max = curr_max
            tmp_min = curr_min
            curr_max = max(val, tmp_max * val, tmp_min * val)
            curr_min = min(val, tmp_max * val, tmp_min * val)
            glob_max = max(glob_max, curr_max)
            
        print(glob_max)

if __name__ == '__main__':
    solve()