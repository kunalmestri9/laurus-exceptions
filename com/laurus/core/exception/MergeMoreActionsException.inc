<?php
/**
 * Description of MergeMoreActionsException
 *
 * @author kunal.mestri
 */
class MergeMoreActionsException extends Exception {
    public function __construct($message,$code=0) {
        parent::__construct($message);
        $this->code=$code;
    }
}
?>
