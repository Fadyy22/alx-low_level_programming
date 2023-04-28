section .data
msg db 'Hello, Holberton', 0
section .text
global main
extern printf
main:
push msg
call printf
ret
