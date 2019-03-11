import java.io.*
import java.util.*

fun main(args: Array<String>) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. */
    var n = readLine ( )!!.toInt ( )

    val map = HashMap <String, String> ( )
    while ( n -- > 0 ) {
        readLine ( ) ?. run {
            val key = this.split ( " ", limit = 2 )
            map [ key [ 0 ] ] = key [ 1 ]
        }
    }

    loop@ while ( true ) {
        var bFound = readLine ( ) ?. let {
            map [ it ] ?. run {
                println ( "${it}=${this}" )
            } ?: run {
                println ( "Not found" )
            }
            true
        } ?: false

        if ( ! bFound )
            break@loop
    }
}

