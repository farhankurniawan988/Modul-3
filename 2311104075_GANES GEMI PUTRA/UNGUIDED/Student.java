package com.method;

public class Student {
    private final String studentName;
    private String studentId;
    private final int korean;
    private final int english;
    private final int math;

    // Constructor
    public Student(String studentName, String studentId, int korean, int english, int math) {
        this.studentName = studentName;
        this.studentId = studentId;
        this.korean = korean;
        this.english = english;
        this.math = math;
    }

    // Menghitung rata-rata nilai
    public double calculateAverage() {
        return (korean + english + math) / 3.0;
    }

    // Mengambil informasi lengkap siswa
    public String getStudentInfo() {
        return "Nama: " + studentName + "\n" +
               "ID: " + studentId + "\n" +
               "Korean: " + korean + "\n" +
               "English: " + english + "\n" +
               "Math: " + math;
    }

    // Mengubah nomor mata kuliah
    public void setCourseNumber(String newId) {
        this.studentId = newId;
    }

    // Main method to test the Student class
    public static void main(String[] args) {
        // Create a new Student object
        Student student = new Student("Ganes Gemi Putra", "2311104075", 85, 90, 88);
        
        // Print student info
        System.out.println(student.getStudentInfo());
        
        // Calculate average
        System.out.println("Rata-rata nilai: " + student.calculateAverage());
        
        // Change course number
        student.setCourseNumber("2311203075");
        System.out.println("Updated Student Info:\n" + student.getStudentInfo());
    }
}
