<?php
/**
 * @author Sandhya Mhaskar
 */
class UnsupportedTypeException extends RuntimeException{
        private $type;
        private $expected;
        function __construct($type=null,$expected=null,$mess="Unsupported Type Exception",$code="399"){
		parent::__construct($mess,$code,null);
                if($type!=null)
                    $this->type=$type;
                if($expected!=null)
                    $this->expected=$expected;
	}
        function  __toString() {
            if($this->type==null || $this->expected==null)
                 return "UnsupportedTypeException";
            else
                 return $this->type ." is given and ". $this->expected ." excepected";
        }

}

?>
