#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>

#define LED_IOCTL_MAGIC 'L'
#define LED_IOCTL_GET_STATE _IOR(LED_IOCTL_MAGIC, 0, int)
#define LED_IOCTL_SET_STATE _IOW(LED_IOCTL_MAGIC, 1, int)

int main() {
    int i;
    int fd = open("/dev/leds", O_RDWR);
    if (fd < 0) {
        perror("Failed to open /dev/leds");
        return EXIT_FAILURE;
    }

    char c;
    int led_state;
    while (1) {
        printf("Press 's' to show LED states, '1'-'4' to toggle a LED, or 'q' to quit: ");
        c = getchar();

        switch (c) {
            case 's':
                // Lấy trạng thái của các LED
                for (i = 1; i <= 4; ++i) {
                    led_state = ioctl(fd, LED_IOCTL_GET_STATE + i - 1, NULL);
                    if (led_state < 0) {
                        perror("Failed to get LED state");
                        return EXIT_FAILURE;
                    }
                    printf("LED %d: %s\n", i, led_state ? "on" : "off");
                }
                break;

            case '1': 
            case '2':
            case '3':
            case '4':
                // Đổi trạng thái của LED tương ứng
                led_state = ioctl(fd, LED_IOCTL_GET_STATE + c - '1', NULL);
                if (led_state < 0) {
                    perror("Failed to get LED state");
                    return EXIT_FAILURE;
                }
                led_state = !led_state;
                if (ioctl(fd, LED_IOCTL_SET_STATE + c - '1', led_state) < 0) {
                    perror("Failed to set LED state");
                    return EXIT_FAILURE;
                }
                printf("LED %c: %s\n", c, led_state ? "on" : "off");
                break;

            case 'q':
                // Đóng file và thoát chương trình
                close(fd);
                return EXIT_SUCCESS;

            default:
                printf("Invalid input.\n");
                break;
        }

        // Đọc các ký tự thừa
        while (getchar() != '\n');
    }
}
