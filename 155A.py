n = int(input())
scores = list(map(int, input().split()))
min_score = max_score = scores[0] 
count = 0
for score in scores :
    if score < min_score:
        min_score = score
        count += 1
    if score > max_score:
        max_score = score
        count += 1
print(count)
