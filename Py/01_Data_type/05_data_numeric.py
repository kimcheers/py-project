scores = [83.8, 92.3, 76.8, 88.5, 90.2]

print("점수 목록",scores)


print("최고 점수", max(scores))
print("최저 점수", min(scores))

print("총점",sum(scores))
avg = sum(scores)/len(scores)
print("평균:", round(avg,1))