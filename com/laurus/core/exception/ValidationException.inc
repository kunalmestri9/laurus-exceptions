<?php
/**
 * Description of ValidationException
 *
 * @author kunal.mestri
 */
class ValidationException extends Exception {
    public function __construct($message,$code=0) {
        parent::__construct($message);
        $this->code=$code;
    }
}
?>
