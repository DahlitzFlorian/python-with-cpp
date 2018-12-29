FROM base:latest

RUN mkdir /app
WORKDIR /app
COPY . /app

RUN make
RUN python3 addition.py