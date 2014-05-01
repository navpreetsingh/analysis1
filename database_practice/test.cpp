#include <mysql++.h>
#include <stdlib.h>
 
using namespace std;
using namespace mysqlpp;
 
int main() {
    try {
        Connection conn(false);
        conn.connect("technical_analysis", "localhost", "root", "s8187u610");
        //conn.connect("DB NAME", "DB HOST probably localhost", "DB USER", "DB PASS");
        Query query = conn.query();

        cout << "Great" << "\n";
        /* Let's get a count of something */
        query << "SELECT COUNT(*) AS row_count FROM stocks";
        StoreQueryResult bres = query.store();
        cout << "Total rows: " << bres[0]["row_count"] << "\n";

    } catch (BadQuery er) { // handle any connection or
        // query errors that may come up
        cerr << "Error: " << er.what() << endl;
        return -1;
    } catch (const BadConversion& er) {
        // Handle bad conversions
        cerr << "Conversion error: " << er.what() << endl <<
                "\tretrieved data size: " << er.retrieved <<
                ", actual size: " << er.actual_size << endl;
        return -1;
    } catch (const Exception& er) {
        // Catch-all for any other MySQL++ exceptions
        cerr << "Error: " << er.what() << endl;
        return -1;
    }
 
    return (EXIT_SUCCESS);
}