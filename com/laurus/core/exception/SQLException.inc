<?php
/**
 * 
 * @author Sandhya mhaskar
 */
import('com.laurus.core.exception.ISQLExceptionType');
class SQLException extends RuntimeException{
		function __construct(Entry $type){
			parent::__construct( $type->getValue(),$type->getKey(),null);
		}

}
?>
