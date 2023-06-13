# Arduino PlatformIO C++ Demo

This project demonstrates some simple concepts and patterns found in standard object oriented programming. The unique angle on these examples is they are applied within the PlatformIO VSCode Extension.

Each of the sub directories should have a relevant `README` file. The `README` will likely have only a high-level explanation of what's happening in the code. I tried to put a bulk of the explanation as to what's happening directly in the code itself, via block comments.

## Demos

| Name | Notes |
| ---- | ----- |
| **`Custom Classes`** | How to use custom classes in your project. |
| **`Serial Input`** | Applied Arduino example of communicating via Serial. |

## Environment Setup

### Extensions

Be sure to look at the `.vscode/extensions.json` to understand which extensions are recommended (i.e. _required_) for this project. A full explanation of how to see the Recommendations in the UI, see [this article](http://go.microsoft.com/fwlink/?LinkId=827846).

### File Nesting

There is a file called `settings.json` (in the `.vscode` directory) with one, custom setting. The purpose of this setting is to ensure that Class Files (ending in `.cpp`) are nested below their corresponding Header Files (ending in `.h`). This is just my preference and seems logical. Change it if you want to. It shouldn't show up in your `git` changes since it is also included in the `.gitignore` file.