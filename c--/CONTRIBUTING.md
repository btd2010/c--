# Contributing
This guide provides a baseline for how to contribute to the compiler.

## Notes
To write notes to yourself, use one of these file extensions:

```
.stickynote
.note
.notemd
```

These are detected as Markdown and do not sync with your git commits.

## Directories
- ``/lib``: Libraries
    - ``/include``: Any header files needed by the compiler.
    - ``/icons``: **Do not update this in PRs (except docs)**. Contains icons for documentation.
- ``/compiler``: Compiler. Contains no subdirectories, it is only the compiler.
- ``/tools``: Command line utilities. Includes ``c--``.