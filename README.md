# Multicurrency Bill Splitter
*The Holy Grail for international students like me, who always have to split the bills in between different currencies*

## How to run
As of now:
1. Clone the repo to your computer
2. Create a *build* folder in the *multicurrency-bill-splitter* repo
2. Open a console and navigate to the *build* folder
3. From there, run:
```
cmake ../
cmake --build .
```
4. Go in *build/Debug* and run *BillSplitter.exe* - from a console. It should ask for your input. Also, if you run *tests.exe* from the same repository, it should automatically provide you with the results of all unit tests performed. 

## To do list
- [ ] Write more unit tests and figure out how to properly call the custom library in the tests
- [ ] Finish implementing all the functions in the custom library
- [ ] Finish implementing main
- [ ] GUI with Qt
- [ ] Automate fetching the current exchange rate
