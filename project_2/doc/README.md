## Project 2: Library 

### class ItemInterface [#](https://github.com/MacSzu/proi/blob/master/project_2/include/ItemInterface.h)
The [ItemInterface class](https://github.com/MacSzu/proi/blob/master/project_2/include/ItemInterface.h) is an abstract base class created in order to store multiple types of a  [template class Item](https://github.com/MacSzu/proi/blob/master/project_2/include/Item.h) in a single vector.  Problem described in [StackOverflow thread ](https://stackoverflow.com/questions/16527673/c-one-stdvector-containing-template-class-of-multiple-types).

It implements all necessary  properties and methods a library item should have. However,  methods, which use a specific type in the template class, are declared as virtual one and equal 0. 

Example:

    virtual void show(std::ostream& stream) const = 0; // shows all properties of the item

**The ItemInterface class does not implement such methods. They had to be defined in the Item class.**

### template class Item [#](https://github.com/MacSzu/proi/blob/master/project_2/include/Item.h)
The `template class Item` is enabling programmer to define a type of property `num_of_pages`.  For short writings the type may be a `one-byte unsigned int (unsigned char)` and for longer ones `unsigned short int`.

This class inherits the ItemInterface class. Because of it, it is necessary to define all vritual methods from the ItemInterface class. 

The function `virtual void show(std::ostream& stream) const = 0` is an example.  It cannot be defined in the ItemInterface class, because it shows all properties of an item, including variable `num_of_pages` (it has a type specifed by a programmer and is declared in the template class Item, not in the ItemInterface). 
