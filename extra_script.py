import os
Import("env")

env.Replace(
    COMPILATIONDB_PATH=os.path.join("$PROJECT_DIR", "compile_commands.json")
)
