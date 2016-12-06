<?php
import('com.laurus.core.service.ServiceException_SUBTYPE');
/**
 * Description of FileManagerServiceException
 *
 * @author kunal.mestri
 */
class ServiceException extends Exception{
    public function __construct($message, $code=ServiceException_SUBTYPE::UNKNOWN, $previous=null) {
        parent::__construct($message, $code, $previous);
    }
}

?>
