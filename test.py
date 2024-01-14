import os
import json

class Student:
    def __init__(self, name, age, grades):
        self.name = name
        self.age = age
        self.grades = grades

    def get_average_grade(self):
        return sum(self.grades) / len(self.grades)
    
    def read_students_from_file(filename):
            students = []
            if os.path.exists(filename):
                with open(filename, 'r') as f:
                    students_data = json.load(f)
                    for student_data in students_data:
                        students.append(Student(student_data['name'], student_data['age'], student_data['grades']))
            return students
    def write_students_to_file(filename, students):
        students_data = [{'name': s.name, 'age': s.age, 'grades': s.grades} for s in students]
        with open(filename, 'w') as f:
            json.dump(students_data, f)
    def main(self):
        students = self.read_students_from_file('students.json')
        for student in students:
            print(f'Student {student.name} has an average grade of {student.get_average_grade()}')
        new_student = Student('John', 15, [85, 90, 78])
        students.append(new_student)
        self.write_students_to_file('students.json', students)