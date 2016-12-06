<?php
/**
 * @author Sandhya Mhaskar
 */
class ClassNotFoundExeption extends RuntimeException{
        //public $classname;

        function __construct($classname){
            $mess = $classname."_Class not found";
		parent::__construct($mess,"233",null);
                
	}
       

}

?>
