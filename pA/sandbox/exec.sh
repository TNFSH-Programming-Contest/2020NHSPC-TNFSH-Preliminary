#!/bin/bash

problem_name=A
sandbox=$(dirname "$0")

"${sandbox}/${problem_name}.exe" "$@"
