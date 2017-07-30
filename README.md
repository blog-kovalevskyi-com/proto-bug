# Repro
protoc --cpp_out . Engine.proto
g++ main.cpp Engine.pb.cc -o main `pkg-config --cflags --libs protobuf`
./main
