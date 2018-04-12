## Project 2: Library 

### class ItemInterface [#](https://github.com/MacSzu/proi/blob/master/project_2/include/ItemInterface.h)
The [ItemInterface class](https://github.com/MacSzu/proi/blob/master/project_2/include/ItemInterface.h) is an abstract class created in order to store multiple types of a  [template class Item](https://github.com/MacSzu/proi/blob/master/project_2/include/Item.h) in a single vector. 

It implements all necessary  properties and methods a library item should have expect these which use a specific type in the template class. 
Such methods are declared as virtual one and equal 0. 
Example:

    virtual void show(std::ostream& stream) const = 0; // shows all properties of the item

**The ItemInterface class does not implement such methods.** They had to be defined in the Item class. 

### template class Item [#](https://github.com/MacSzu/proi/blob/master/project_2/include/Item.h)
