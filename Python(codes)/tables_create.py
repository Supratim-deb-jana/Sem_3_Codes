def generatTabel(n):
        with open(f"Tables/table_{n}.txt","w") as a:
            for i in range(1,11):
                  with open(f"Tables/table_{n}.txt","a") as b:
                        table=f"{n}X{i}={n*i}\n"
                        b.write(str(table))

for i in range(2,21):
      generatTabel(i)