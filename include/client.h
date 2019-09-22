/* Software systems mini project : Railway ticket booking system
 *
 * Author : Vipin Rai P
 *          Mtech CSE First year 
 *          MT2019134
 *
 */

#define MAX 80 
#define PORT 8080 
#define SA struct sockaddr



void adminMenu(int sockFd);
void flushBuffer();
void normalUserMenu(int sockFd,int uid);
void printTicket(struct booking ticket,int sockFd);
int getBookingIndex(struct booking ticket[],int bid,int totalBookings);
void printTrainDetails(struct train tr);
void agentMenu(int sockFd,int uid);
void printAccountDetails(struct account acc);
