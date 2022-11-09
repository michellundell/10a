
class Booking {
private:
// secret
public:
	Booking(string firstname, string lastname,string seatclass,string dep, string dest,string datestr,string timestr);
	string getFirstname();
	string getLastname();
	string getSeatclass();
	string getDep();
	string getDest();
	string getDatestr();
	string getTimestr();
};

class Flight {
private:
// secret
public:
	Flight(int flightno, char *dep, char *dest);
	bool isThisTheFlight(Booking &booking);
	int getFlightno();
	string getDeparture();
	string getDestination();
	string getDate();
	string getTime();
};

class FlightManager {
private:
// secret
public:
	FlightManager(const string filename);
	std::list<Flight *> getFlights();
};

class BookingManager {
private:
// secret
public:
	BookingManager(const string filename);
	std::list<Booking *> getBookings();
};

class Ticket {
private:
// secret
public:
	Ticket(Booking &, Flight &);
	friend ostream& operator<<(ostream &,Ticket &);
};

class TicketPrinter {
private:
// secret
public:
	TicketPrinter(std::list<Flight *>, std::list<Booking *>);
	void print();
};


int main(int argc, char **argv)
{
	FlightManager fm(argv[1]);
	BookingManager bm(argv[2]);
	TicketPrinter printer(fm,bm);
	printer.print();
}
