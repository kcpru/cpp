org 100h
      
start:      
mov ax, vertical                             

out 4, ax   

call delay5s

mov ax,horizontalstop 

out 4, ax         

call delay1s
     
mov ax, horizontal

out 4, ax  

call delay5s

mov ax, verticalstop 

out 4, ax 

call delay1s

jmp start

vertical            dw         0000_1000_0110_0001b                  
horizontal          dw         0000_0011_0000_1100b                   
verticalstop        dw         0000_0110_1001_1010b
horizontalstop      dw         0000_0100_1101_0011b       

delay5s: 
mov     cx, 4Ch
mov     dx, 4B40h
mov     ah, 86h
int     15h      

delay1s:
mov cx, 0FH
mov dx, 4240H
mov ah, 86H
int 15h    

ret