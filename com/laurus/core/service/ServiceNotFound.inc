<?php
import('com.laurus.core.service.ServiceException_SUBTYPE');
/**
 * Description of ServiceNotFound
 *
 * @author kunal.mestri
 */
class ServiceNotFound extends Exception {
    public function __construct($message, $code=ServiceException_SUBTYPE::SERVICE_NOT_FOUND, $previous=null) {
        parent::__construct($message, $code, $previous);
    }
}

?>
