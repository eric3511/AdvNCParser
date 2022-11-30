#!/usr/bin/env bash
# Program:
# This Program for gen lexer / parser cpp file for *.g4
# History:
# 2022/11/30  Eric Jiang First release

current_dir=$(pwd)
g4_dir="${current_dir}/src/g4"
target_lexer_file="${g4_dir}/NCLexer.g4"
target_parser_file="${g4_dir}/NCParser.g4"

if [ ! -d ${g4_dir} ] ; 
then
    echo "[ERROR] can not find the g4 dir!"
    exit 0
else
    echo "======== scan the ${g4_dir}  dir ========"
fi


find ${g4_dir}/*  ! -name  '*.g4'  | xargs rm -f

if type antlr4 >/dev/null 2>&1; then 
  echo '[INFO] antlr4 ok ...' 
else 
  echo '[ERROR] can not find antlr4!' 
  exit 0
fi

antlr4 -Dlanguage=Cpp ${target_lexer_file} ${target_parser_file}

 echo "======== gen g4 files end ========"