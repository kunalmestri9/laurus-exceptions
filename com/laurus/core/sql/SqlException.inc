<?php
interface SQLExceptionType{ 
    const ZERO_ROWS=-109949;
    const DUP_KEY=1062;
    const CONNECTION_FAILED_SERVER=2003;
    const CONNECTION_FAILED_DATABASE=1049;
    const NO_ROWS_AFFECTED=100001;
    const FOREIGN_KEY=1452;
}

/**
 * Description of SqlException
 *
 * @author Kunal Mestri <kunal@laurus-it.com>
 */
class SqlException extends RuntimeException {
    public function __construct($message, $code=0, $previous=null) {
        parent::__construct($message, $code, $previous);
    }
}

?>
