g++ --coverage -O0 -g .\test_math.cpp ..\src\math.cpp -lgtest -lgtest_main -pthread -o main.exe && .\main.exe && gcovr -r . --html --html-details -o coverage.html && pause
