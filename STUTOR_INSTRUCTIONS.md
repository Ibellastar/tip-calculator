# 🧪 Mission: Break the tip-calculator Autograder (Without Getting Caught)
 
**Goal:** Clone the tip-calculator repo from Gihub classroom, explore how the autograding system works, and try to trick it into giving you 100%—_without_ triggering the GitHub Classroom alert that you've tampered with the `.github` folder.

---

## 🎯 Objective

You’re tasked with reverse-engineering the tip-calculator assignment’s test-based autograder. Your mission, should you choose to accept it (and you *definitely* should), is to fool the system into awarding a perfect score while flying under the radar.

---

## 🛠️ Step-by-Step Instructions

### 1. Understand the Autograder

- Open the **.github/workflows/** directory. This is where the GitHub Actions workflow lives.

- Find the classroom.yml and read it to understand:
    -  What triggers the workflow?
    -  What tests does it run?
    - What files and outputs does it expect?

### 2. Explore the Test Logic

- Look for the **tests/** folder.
- Reverse-engineer the test expectations. What output is the grader looking for?

### 3. Plan Your Attack

- Your goal is to make your code pass the tests, not necessarily solve the problem correctly. Some ideas:

    - Hardcode the output if the test uses static file comparisons.

    - Spoof the output stream using clever I/O tricks.

    - Conditional logic using something like **#ifdef TESTING** to behave differently during test runs

    - Detect GitHub Actions via environment variables like **GITHUB_ACTIONS** and alter behavior accordingly.

    🧠 Be creative — your job is to outsmart the system (ethically)!

### 4. DON'T Modify **.github/**
- GitHub Classroom flags any changes to the **.github/** folder.

- Do not delete or edit the workflow files.

### 5. Push and Observe
- Push your changes and let GitHub Actions run.

- Check the feedback. If you score 100% and no workflow flags appear—congratulations, you’ve succeeded 🎉

### 6. Document Your Process
- Write down how you did it.

- Be prepared to explain your method during the stutor debrief.