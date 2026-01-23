tasks = []

#append
tasks.append("공부하기")
tasks.append("운동하기")
tasks.append("청소하기")
print(tasks)

#remove
tasks.remove("운동하기")
print(tasks)

#insert
tasks.insert(1,"장보기")
print(tasks)

#pop
remove = tasks.pop(2)
print("pop으로 삭제된 항목:", remove)
print("pop후", tasks)

#sort
tasks.sort(reverse = "Ture")
print("sort후:", tasks)

print("총길이:", len(tasks))


print("장보기" in tasks)