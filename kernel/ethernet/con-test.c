#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include "../headers/con-test.h"

int test_con() {
    const char* ip = "104.26.14.72";
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket < 0) {
        printf("[FATAL] Socket creation error!\n");
        return -1;
    }

    struct sockaddr_in serverAddress;
    memset(&serverAddress, 0, sizeof(serverAddress));
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(80);

    if (inet_pton(AF_INET, ip, &serverAddress.sin_addr) <= 0) {
        printf("[FAILED] Connect failed\n");
        printf("[WARNING] If you see this message, it means this IP address is not supported!\n");
        close(clientSocket);
        return -1;
    }

    if (connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) < 0) {
        printf("[FAILED] Cannot connect to the Internet!\n");
        printf("[WARNING] This project supports only eth0 or wlan0!\n");
    } else {
        const char* message = "Hello, server!";
        if (send(clientSocket, message, strlen(message), 0) < 0) {
            printf("Message sending failed\n");
            close(clientSocket);
            return -1;
        } else {
            printf("[OK] Internet connected\n");
            printf("[OK] Loading packet manager...\n");
        }
    }

    close(clientSocket);
    return 0;
}
