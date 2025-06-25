people = {
  "Jithin": "8848758493",
  "Jimmy": "8368663565",
  "Reji": "9899691717",
}

input = input("Search: ")

if input in people:
  print(f"Found: {people[input]}")
else:
  print("Not Found.")