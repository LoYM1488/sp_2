FROM ubuntu
RUN apt-get update && apt-get upgrade -y \
&& apt-get install gcc nasm gdb g++ -y
RUN apt-get install gcc-multilib g++-multilib -y
COPY ./lab2_c.cpp .
COPY ./lab2_ass.asm .

