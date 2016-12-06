<?php

/**
 * Here PHP Do not Support Any Inner Class hence it is written outside the class.
 */
class FileException_SUBTYPE{
    const UNKNOWN=1;
    const INCORRECT_PATH=2;
    const FILE_NOT_FOUND=3;
    const INCORRECT_CONFIGURATION=4;
    const FILE_ALREADY_EXSISTS=5;
    const FILE_NOT_UPLOADED=6;
}


/**
 * Description of FileException
 *
 * @author kunal.mestri
 */
class FileException extends Exception{
    private static $descriptionArray=array(
        FileException_SUBTYPE::UNKNOWN =>"Unknown Exception Occured",
        FileException_SUBTYPE::INCORRECT_PATH =>"Path which is provided is incorrect or does not exist",
        FileException_SUBTYPE::FILE_NOT_FOUND =>"File Not found on the specified path",
        FileException_SUBTYPE::INCORRECT_CONFIGURATION => "Something wrong with apache configuration",
        FileException_SUBTYPE::FILE_ALREADY_EXSISTS =>"File or Directory path you want to create is already exists"
    );
    protected $message;
    protected $code;
    public function __construct($message, $code=FileException_SUBTYPE::UNKNOWN, $previous=null) {
       parent::__construct($message, $code, $previous);
    }
    
    protected static function getCustomMessage($errorCode){
       return self::$descriptionArray[$errorCode];
    }
    
    public function __toString() {
        parent::__toString();
        return $this->message ."| Caused by :". self::getCustomMessage($this->code);
    }
}

?>
