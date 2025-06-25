def main():
  meow(3)

def meow(n):
  for _ in range(n):
    print("meow!", end=' ')

if __name__ == "__main__": ## needed when implementing a library where the library may have its own main function 
  main()