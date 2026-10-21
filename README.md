# Order_Book
Build a program that ingests exchange-style market data, reconstructs an order book, publishes market statistics, and measures the cost of every stage of processing.

---

# Goals of this project
The main goal of this project is experience. Since graduating from college I have not had the opportunity to write any C or C++ code which was always my favorite language to write in. I have also recently been exposed to the idea of quantitative engineering. Financial data and systems have always intruiged me so having the opportunity to combine a project in my favorite languages with an interesting subject really excited me. What I'm setting out to do is create a system that will ingest market data and using that data recustruct an order book. During the process, I'm hoping to learn about how my code interacts with the hardware and where I can work on speed, latency, and data modeling.

---

# Project Structure
/apps: Executable code. Main development space
/bench:
/docs: Logbook of test runs and results, current test runs will be unreliable while running on a local VM
/src: Reusable library code
/tests: Test files