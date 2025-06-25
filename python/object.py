class Student():
  
  def __init__(self, name, id):
    self.name = name
    self.id = id

  def changeID(self, id):
    self.id = id

  def print(self):
    print(f"{self.name} - {self.id}")

jithin = Student("Jithin", 10)
jithin.print()

new_id = int(input("Enter new ID: "))
jithin.changeID(new_id)
jithin.print()