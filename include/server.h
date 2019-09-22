/* Software systems mini project : Railway ticket booking system
 *
 * Author : Vipin Rai P
 *          Mtech CSE First year 
 *          MT2019134
 *
 */
void doLogin(struct clientRequest *creq,struct serverAck *serAck);
int releaseLock(struct flock *fl,int fd);
int acquireLock(struct flock *fl,int uid);
void flushBuffer();

