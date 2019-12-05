org 100h
       
mov bl, 20
       
start:
in al, 125

cmp al, bl
jl  on

cmp al, 21
jle  start
jg   off
      
on:
mov al, 1
out 127, al   
jmp start

off:
mov al, 0
out 127, al

jmp start      

ret
