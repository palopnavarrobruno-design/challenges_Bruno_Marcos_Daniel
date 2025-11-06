FROM gcc:latest
WORKDIR /app
COPY app/ .
RUN make
ENTRYPOINT ["./app"]
