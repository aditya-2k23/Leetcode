# Problem Templates

This folder contains templates for organizing your LeetCode problem solutions and tests. These templates provide a consistent structure to document and implement your solutions across multiple programming languages.

## Template Structure

```plaintext
templates/
│
├── problem_template.md       # Template for documenting the problem and solution approach
│
├── solutions/                # Templates for implementing solutions in different languages
│   ├── cpp_solution_template.md
│   ├── java_solution_template.md
│   └── python_solution_template.md
│
└── tests/                    # Templates for creating test cases in different languages
    ├── cpp_test_template.md
    ├── java_test_template.md
    └── python_test_template.md
```

## How to Use the Templates

### 1. Creating a New Problem Folder

For each new problem, create a folder named with the problem number and title (e.g., `P-1-two-sum`):

```bash
mkdir "problems/P-<number>-<problem-name>"
cd "problems/P-<number>-<problem-name>"
```

### 2. Using the Problem Template

- Copy the problem template to your new problem folder:

  ```bash
  cd "problems/P-<number>-<problem-name>"
  copy "..\..\templates\problem_template.md" "README.md"
  ```

- Edit the README.md file to fill in:
  - Problem number and name
  - Difficulty level
  - Topics/tags
  - LeetCode problem link
  - Problem description
  - Your approach and solution steps
  - Time and space complexity analysis

### 3. Implementing Solutions

1. Choose your preferred language template from the `solutions` folder
2. Create a solution file in your problem folder:

   - For Python: `solution.py`
   - For C++: `solution.cpp`
   - For Java: `solution.java`

3. Use the corresponding language template as a reference for the file structure and documentation.

### 4. Creating Tests

1. Create a `tests` folder in your problem directory:

   ```bash
   mkdir tests
   cd tests
   ```

2. Copy the appropriate test template for reference.

3. Create the actual test file (e.g., `test.py`, `test.cpp`, or `test.java`) based on the template.

### 5. Running Tests

Follow the instructions in the test template files to run your tests:

- **Python**:

  ```bash
  cd tests
  python test.py
  ```

- **C++**:

  ```bash
  cd tests
  g++ test.cpp ../solution.cpp -o test; test
  ```

- **Java**:

  ```bash
  # ! Change directory to the problem folder (not in the tests folder)!
  javac .\Solution.java tests/test.java
  java -cp ".;tests" test
  ```

## Tips for Using Templates

1. **Problem Analysis**: Use the problem template to break down the problem before coding
2. **Multiple Solutions**: You can document multiple approaches in the README.md
3. **Time/Space Analysis**: Always include complexity analysis in your documentation

## Template Customization

Feel free to customize these templates to better suit your needs:

- Add more sections to problem documentation
- Modify test templates to include additional helper functions
- Create templates for additional programming languages (See [Contributing](../README.md/#contributing) section)

## Example Workflow

1. Find a problem on LeetCode
2. Create a new problem folder
3. Copy and fill in the problem template
4. Implement your solution using the appropriate language template
5. Create test cases using the test template
6. Run tests to verify your solution
7. Update your documentation with any insights or optimizations

---

Happy coding and good luck with your LeetCode journey! 🔥🚀
