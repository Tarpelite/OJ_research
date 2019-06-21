nums = [11, 13, 2.5]
bags = []
visited = []
target = 500
sum_x  = 0

def left_find(i, j, sum_x):
    if i < 0:
        return False
    elif sum_x == target:
        return True
    elif sum_x < target:
        sum_x = nums[i] + nums[j+1]
        return right_find(i, j+1, sum_x)
    else:
        sum_x = nums[i-1] + nums[j]
        return left_find(i-1, j, sum_x)


def right_find(i, j, sum_x):

    if j >= len(nums):
        return False
    elif sum_x == target:
        return True
    elif sum_x <target:
        sum_x = nums[i] + nums[j + 1]
        return right_find(i, j + 1, sum_x)
    else:
        sum_x = nums[i - 1] + nums[j]
        return left_find(i - 1, j, sum_x)



def sum_num():
    nums.sort()
    i = int(len(nums)/2)
    j = i + 1
    if len(nums)<2:
        return False
    else:
        sum_x = nums[i] + nums[j]
        left_find(i, j, sum_x)



def is_2_day(i):
    if i == len(nums) - 1:
        return False
    elif nums[i] > 10 and nums[i+1] > 10:
        return True
    else:
        return is_2_day(i+1)

if __name__ == "__main__":

    if is_2_day(0) and sum_num():
        print("true")
    else:
        print("else")

