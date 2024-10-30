## HTML Transpiler to Markdown in C
> This project aims to study how to create a transpiler that will take an `.html` file and transform it into a `.md` file.

## Concepts used

### **Stack** (Data Structure)
In this project, the `stack` data structure was used to store the exact order of tags that were opened, so they can be closed in the correct order to generate the `.md` file correctly.

---

## State Machine (Read)

| Current State   | Next State       |
|-----------------|------------------|
| INIT            | READ_TAG         |
| READ_TAG        | READ_CONTENT     |
| READ_TAG        | CHECK_CLOSE_BAR  |
| READ_CONTENT    | READ_TAG         |
| CHECK_CLOSE_BAR | INIT             |
| CHECK_CLOSE_BAR | READ_TAG         |
| CHECK_TAG       | CHECK_TITLE      |
| CHECK_TAG       | CHECK_CLOSE_OPEN |
| CHECK_TITLE     | READ_CONTENT     |
| CHECK_CLOSE_OPEN| READ_CONTENT     |
| CHECK_CONTENT   | READ_TAG         |
| CHECK_CONTENT   | CHECK_CONTENT    |
| CHECK_TAG_END   | INIT             |

## State Machine (Write)

| Current State | Next State |
|---------------|------------|
| NONE          | TAG        |
| TAG           | CONTENT    |
| CONTENT       | TAG        |
| CONTENT       | NONE       |

Under construction ...