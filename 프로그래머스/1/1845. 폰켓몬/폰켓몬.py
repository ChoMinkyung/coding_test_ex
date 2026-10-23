def solution(nums):
    pocket = set(nums);
    answer = min(len(pocket), len(nums) // 2)
    
    return answer