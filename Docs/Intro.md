# Documentation

This Is the Documentation for my tutorial implementation

The main use of this documentation is to Learn how to create documentation

## Set up VSCode debug for bazel

create a tasks.json

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build Example (Debug)",
            "type": "shell",
            "command": "bazel build src:src -c dbg",
            "windows": {
                "command": "bazel build //src:scr --experimental_enable_runfiles -c dbg"
            },
            "osx": {
                "command": "bazel build //src:scr -c dbg --spawn_strategy=standalone",
            },
            "group": {
                "kind": "build",
                "isDefault": true
            },
        }
    ]
}
```

And Create a launch.json

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "BazelDebug",
            "preLaunchTask": "Build Example (Debug)",
            "request": "launch",
            "args": [],
            "stopAtEntry": false,
            "environment": [],
            "externalConsole": false,
            "type": "cppdbg",
            "program": "${workspaceFolder}/bazel-out/k8-dbg/bin/src/src",
            "cwd": "${workspaceFolder}/bazel-out/k8-dbg/bin/src/src.runfiles/__main__/",
            "windows": {
                "type": "cppvsdbg",
                "program": "${workspaceFolder}/bazel-out/x64_windows-dbg/bin/src/src",
                "cwd": "${workspaceFolder}/bazel-out/x64_windows-dbg/bin/src.runfiles/__main__/",
            },
            "osx": {
                "type": "cppdbg",
                "MIMode": "lldb",
                "program": "${workspaceFolder}/bazel-out/darwin-dbg/bin/src/src",
                "cwd": "${workspaceFolder}/bazel-out/darwin-dbg/bin/src.runfiles/__main__/",
            },
            "linux": {
                "type": "cppdbg",
                "MIMode": "gdb",
                "program": "${workspaceFolder}/bazel-out/k8-dbg/bin/src/src",
                "cwd": "${workspaceFolder}/bazel-out/k8-dbg/bin/src/src.runfiles/__main__/",
                "sourceFileMap": {
                    "/proc/self/cwd/": "${workspaceFolder}",
                },
            },
        },
    ]
}
```

Only tested on Ubuntu 20.04

Source [link](https://shanee.io/blog/2019/05/28/bazel-with-visual-studio-code/)

