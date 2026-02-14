# 📊 Directed Graph Degree Verification  
**Course:** CSE106 – Discrete Mathematics  
**Programming Language:** C  

---

## 📌 Overview

This project implements a **directed graph** using an adjacency matrix and verifies a fundamental theorem from graph theory:

> In any directed graph, the sum of all in-degrees is equal to the sum of all out-degrees.

The program also measures the computational time required to compute the degrees of vertices for increasing graph sizes.

---

## 🧠 Concepts Covered

This project demonstrates the following Discrete Mathematics concepts:

- Directed Graphs (Digraphs)  
- Adjacency Matrix Representation  
- In-Degree and Out-Degree  
- Graph Property Verification  
- Time Complexity Analysis  
- Experimental Performance Measurement  

---

## ⚙️ Program Description

The program performs the following steps:

1. Generates a random directed graph of size `n × n`.
2. Ensures no self-loops (no edge from a vertex to itself).
3. Computes:
   - In-degree of each vertex  
   - Out-degree of each vertex  
4. Calculates:
   ```
   Sum of In-degrees
   Sum of Out-degrees
   ```
5. Verifies the theorem:
   ```
   Sum(In-degrees) = Sum(Out-degrees)
   ```
6. Measures and displays the computational time.
7. Repeats the experiment for multiple graph sizes.

---

## 📐 Graph Sizes Tested

The program runs the experiment for the following values:

```
1000
2000
3000
4000
5000
```

---

## ⏱ Time Complexity

The degree computation algorithm runs in:

```
O(n²)
```

Reason:  
The adjacency matrix representation requires traversing all `n × n` entries.

---

## 🧪 Sample Output

```
For n = 1000:
  Sum of In-degrees  = 499321
  Sum of Out-degrees = 499321
  Verified: Sum(In) == Sum(Out)
  Computational Time = 12.345 ms
```

---

## 🖥 How to Compile and Run

### Compile using GCC:

```
gcc main.c -o graph
```

### Run the program:

```
./graph
```

Make sure a C compiler (such as GCC) is installed on your system.

---

## 📚 Mathematical Explanation

In a directed graph:

- Each edge contributes:
  - +1 to the out-degree of the source vertex  
  - +1 to the in-degree of the destination vertex  

Therefore:

```
Total In-degree = Total Out-degree = Total Number of Edges
```

This program experimentally verifies this property for randomly generated directed graphs.

---

## 📂 Project Structure

```
.
├── main.c
└── README.md
```

---

## 🎯 Learning Objectives

- Understand adjacency matrix representation of graphs  
- Apply definitions of in-degree and out-degree  
- Verify theoretical graph properties through programming  
- Analyze algorithm efficiency  
- Work with large static arrays in C  

---

## 👨‍💻 Author

SM Tanzim Hassan 
CSE106 – Discrete Mathematics  
Department of Computer Science & Engineering  
